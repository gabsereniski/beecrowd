#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ii> vii;

#define x first
#define y second

int solve(vvi &img, vii ones)
{
    int xx[] = {0, -1, 0, 1};
    int yy[] = {-1, 0, 1, 0};

    int total = 0;

    for(auto &one : ones)
    {
        if(!img[one.y][one.x]) continue;

        total++;

        queue<ii> q;
        q.push(one);

        while(!q.empty())
        {
            ii u = q.front();
            q.pop();

            img[u.y][u.x] = 0;

            for(int i = 0; i < 4; i++)
            {
                int nx = u.x + xx[i];
                int ny = u.y + yy[i];

                if(img[ny][nx])
                {
                    img[ny][nx] = 0;
                    q.push({nx, ny});
                }
            }
        }
    }

    return total;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vvi img(n+2, vi(m+2, 0));

    vii ones;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> img[i][j];
            if(img[i][j] == 1) ones.push_back({j, i});
        }
    }
    
    cout << solve(img, ones) << endl;

}
