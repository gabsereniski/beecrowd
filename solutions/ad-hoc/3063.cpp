// Linhas de Ônibus

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

#define MAXN 501

vvi G;
vi dist;
queue<int> q;

int bfs(int src, int dst, int size)
{
    dist[src] = 0;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(auto v : G[u])
        {
            if(dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                if(v == dst) return dist[v] / 2;
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

    G = vvi(T + L + 1);
    dist = vi(T + L + 1, -1);

    for(int i = 1; i <= L; i++)
    {
        int c;
        cin >> c;

        for(int j = 0; j < c; j++)
        {
            int t;
            cin >> t;
            G[t].push_back(i + T);
            G[i + T].push_back(t);
        }
    }

    // for(int i = 1; i < G.size(); i++)
    // {
    //     printf("[%2d]", i);
    //     for(auto j : G[i])
    //         printf("(%2d)", j);
    //     printf("\n");
    // }

    cout << bfs(O, D, T) << endl;
}