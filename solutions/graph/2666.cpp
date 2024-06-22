#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define MAXN 10001
#define id first
#define dist second

int n, cap;
vi tax(MAXN, 0);
vii G[MAXN];
vector<bool> visited(MAXN, false);

int dfs(int &dist, ii u = {1, 0})
{
    visited[u.id] = true;

    for(auto &v : G[u.id])
        if(!visited[v.id])
            tax[u.id] += dfs(dist, v);

    int trips = 2 * ((tax[u.id] + cap - 1) / cap);
    dist += u.dist * trips; 
    return tax[u.id];
}

int main()
{
    cin >> n >> cap;

    for(int i = 1; i <= n; i++)
        cin >> tax[i];
    
    for(int i = 0; i < n; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        G[u].push_back({v, c});
        G[v].push_back({u, c});
    }

    int dist = 0;
    dfs(dist);

    cout << dist << "\n";
}
