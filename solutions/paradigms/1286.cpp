#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#define INF 1e9

int solve(int max_p, int n, vi time, vi pizzas, vvi &memo, int i = 0, int p = 0)
{
    if(p > max_p) return -INF;
    if(memo[i][p] != -1) return memo[i][p];

    int yes = 0, no = 0;
    if(i + 1 <= n)
    {
        yes = solve(max_p, n, time, pizzas, memo, i + 1, p + pizzas[i]) + time[i];
        no = solve(max_p, n, time, pizzas, memo, i + 1, p);
    }
    
    return memo[i][p] = max(yes, no);
}

int main()
{
    int n;
    while((cin >> n) && n)
    {
        int p;
        cin >> p;

        vi time(n), pizzas(n);

        for(int i = 0; i < n; i++)
            cin >> time[i] >> pizzas[i];
        
        vvi memo(n + 1, vi(p + 1, -1));
        cout << solve(p, n, time, pizzas, memo) << " min.\n";
    }
}