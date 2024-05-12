#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

// fenwick tree 2d

class FT2D
{
private:
    vvi ft;

public:
    FT2D(int n, int m)
    {
        ft.assign(n + 1, vi(m + 1, 0));
    }

    void update(int x, int y, int delta)
    {
        for (int i = x; i < ft.size(); i += (i & -i))
            for (int j = y; j < ft[x].size(); j += (j & -j))
                ft[i][j] += delta;
    }

    int q_sum(int x, int y)
    {
        int sum = 0;
        for (int i = x; i > 0; i -= (i & -i))
            for (int j = y; j > 0; j -= (j & -j))
                sum += ft[i][j];
        return sum;
    }

    int q_sum(int x1, int y1, int x2, int y2)
    {
        int r = 0;
        r += q_sum(x2, y2);        
        r -= q_sum(x1 - 1, y2);    
        r -= q_sum(x2, y1 - 1);    
        r += q_sum(x1 - 1, y1 - 1);
        return r;
    }
};

int main()
{
    int n, m, p;

    while (scanf("%d%d%d", &n, &m, &p) && n && m && p)
    {
        int q;
        cin >> q;

        FT2D ft(n, m);

        while (q--)
        {
            char a;
            int x, y, z, w, s;

            cin >> a;
            if (a == 'A')
            {
                cin >> s >> x >> y;
                x++, y++;
                ft.update(x, y, s);
            }

            else if (a == 'P')
            {
                cin >> x >> y >> z >> w;
                x++, y++, z++, w++;
                
                if(x > z) swap(x, z);
                if(y > w) swap(y, w);

                int sum = ft.q_sum(x, y, z, w);
                cout << sum * p << endl;
            }
        }
        printf("\n");
    }
}