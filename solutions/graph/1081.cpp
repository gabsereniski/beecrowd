#include <bits/stdc++.h>
using namespace std;

void dfs(set<int> g[], vector<bool> &visited, int u, int space_count)
{
    visited[u] = true;
    for (auto v : g[u])
    {
        for (int i = 0; i < space_count; i++)
            printf(" ");

        printf("%d-%d", u, v);

        if (!visited[v])
            printf(" pathR(G,%d)", v);

        printf("\n");

        if (!visited[v])
            dfs(g, visited, v, space_count + 2);
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    for (int c = 1; c <= n; c++)
    {
        printf("Caso %d:\n", c);

        int s, e;
        scanf("%d%d", &s, &e);

        set<int> g[s];
        vector<bool> visited(s, false);

        for (int i = 0; i < e; i++)
        {
            int u, v;
            scanf("%d%d", &u, &v);

            g[u].insert(v);
        }

        for (int u = 0; u < s; u++)
        {
            if (!visited[u])
            {
                dfs(g, visited, u, 2);
                if (g[u].size() > 0)
                    printf("\n");
            }
        }
    }
}