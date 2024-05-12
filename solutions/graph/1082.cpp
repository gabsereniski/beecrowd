#include <bits/stdc++.h>
using namespace std;

void dfs(set<int> g[], vector<bool> &visited, int u, set<int> &out)
{
    visited[u] = true;
    out.insert(u);

    for (auto v : g[u])
    {
        if (!visited[v])
            dfs(g, visited, v, out);
    }
}

int main()
{
    int casos;
    scanf("%d", &casos);

    for (int c = 1; c <= casos; c++)
    {
        printf("Case #%d:\n", c);

        int n, e;
        scanf("%d%d", &n, &e);

        vector<bool> visited(n, false);
        set<int> g[n];

        for (int i = 0; i < e; i++)
        {
            char u, v;
            cin >> u >> v;
            g[u - 'a'].insert(v - 'a');
            g[v - 'a'].insert(u - 'a');
        }

        int ccc = 0;

        for (int u = 0; u < n; u++)
        {
            set<int> out;
            if (!visited[u])
            {
                ccc++;
                dfs(g, visited, u, out);
                for (auto ee : out)
                    printf("%c,", ee + 'a');
                printf("\n");
            }
        }
        printf("%d connected components\n\n", ccc);
    }
}