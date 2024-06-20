#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000003
#define INF MAXN

int a[MAXN];
int tab[MAXN];

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M;
        cin >> N >> M;

        for (int i = 0; i < N; i++)
            cin >> a[i];

        fill(tab, tab + M + 1, INF);
        tab[0] = 0;

        for (int m = 1; m <= M; m++)
        {
            for (int i = 0; i < N; i++)
            {
                int n = a[i];
                if (m - n >= 0)
                    tab[m] = min(tab[m], tab[m - n] + 1);
            }
        }

        cout << tab[M] << endl;
    }
}