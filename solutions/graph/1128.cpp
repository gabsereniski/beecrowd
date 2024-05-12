//1128.cpp
#include <bits/stdc++.h>
using namespace std;

int bfs(vector<int> g[], int src, int size)
{
    vector<bool> visited(size, false);
    queue<int> next;
    next.push(src);
    visited[src] = true;
    int c = 0;

    while(!next.empty())
    {
        int u = next.front();
        next.pop();
        c++;

        for(int j = 0; j < g[u].size(); j++)
        {
            int v = g[u][j];
            if(!visited[v])
            {
                visited[v] = true;
                next.push(v);
            }
        }
    }

    return c;
}

int main()
{
    int n, m;
    
    while(scanf("%d%d", &n, &m) && n && m)
    {
        vector<int> g[n];        

        for(int i = 0; i < m; i++)
        {
            int v, w, p;
            scanf("%d%d%d", &v, &w, &p);

            v--, w--;

            g[v].push_back(w);
            if(p == 2) g[w].push_back(v);
        }

        bool G = true;

        for(int u = 0; u < n; u++)
        {
            int c = bfs(g, u, n);
            if(c < n)
            {
                G = false;
                break;
            }
        }

        printf("%d\n", G);
    }
}