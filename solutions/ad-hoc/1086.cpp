#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

int possible(vector<int> T, int l, int d, int area)
{
    int total = 0;
    int c_area = 0;
    bool can = false;

    int i = 0, j = T.size() - 1;

    while(i <= j && T[i] == d)
    {
        total++;
        i++;
        c_area += d * l;
        if (c_area == area)
        {
            can = true;
            break;
        }
    }

    while (!can && i < j)
    {
        if (T[i] + T[j] == d)
        {
            total += 2;
            c_area += d * l;
            i++, j--;
            if (c_area == area)
            {
                can = true;
                break;
            }
            continue;
        }

        if (T[i] + T[j] > d)
            i++;
        else
            j--;
    }

    return can ? total : INF;
}

int main()
{
    int m, n;
    while (scanf("%d%d", &m, &n) && m && n)
    {
        m *= 100, n *= 100;

        int min_d = min(m, n);
        int max_d = max(m, n);

        int l, k;
        scanf("%d%d", &l, &k);

        vector<int> T[2];

        for (int i = 0; i < k; i++)
        {
            int t;
            scanf("%d", &t);
            t *= 100;
            if (t <= max_d)
                T[0].push_back(t);
            if (t <= min_d)
                T[1].push_back(t);
        }

        sort(T[0].begin(), T[0].end(), greater<int>());
        sort(T[1].begin(), T[1].end(), greater<int>());

        int res = min(possible(T[0], l, max_d, m * n), possible(T[1], l, min_d, m * n));

        res == INF ? printf("impossivel\n") : printf("%d\n", res);
    }
}