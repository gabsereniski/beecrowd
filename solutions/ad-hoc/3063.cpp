#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define MAXN 501

vi G[MAXN];
int t[MAXN];

int bfs(int src, int dst, int size)
{
    vi dist(size, -1);
    dist[src] = 0;

    queue<int> q;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        if(u == dst) return dist[u];

        for(auto v : G[u])
        {
            if(dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    return -1;
    
}

int main()
{
    int T, L, O, D;
    cin >> T >> L >> O >> D;

    for (int j = 0; j < L; j++)
    {
        int c;
        cin >> c;

        for (int i = 0; i < c; i++)
        {
            cin >> t[i];
            t[i]--;
        }
        
        for (int u = 0; u < c; u++)
        {
            for (int v = u + 1; v < c; v++)
            {
                G[t[u]].push_back(t[v]);
                G[t[v]].push_back(t[u]);
            }
        }
    }

    cout << bfs(O-1, D-1, T) << endl;
}
