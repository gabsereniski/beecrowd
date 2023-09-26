#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
#define canal first
#define count second

int bfs(int src, int dest, set<int> proibido)
{
    unordered_set<int> visited;
    queue<ii> next;
    next.push({src, 0});
    visited.insert(src);

    while (!next.empty())
    {
        ii u = next.front();
        next.pop();

        if (u.canal == dest)
            return u.count;

        int uu = u.canal;
        int botao[] = {uu + 1, uu - 1, uu * 2, uu * 3};

        for (int i = 0; i < 4; i++)
        {
            int prox = botao[i]; // Canal resultante da operação

            if (prox <= 100000 && prox > 0 && visited.find(prox) == visited.end())
            {
                if (proibido.find(prox) != proibido.end())
                    continue;

                if (prox == dest)
                    return u.count + 1;

                next.push({prox, u.count + 1});
                visited.insert(prox);
            }
        }

        if (!(uu % 2))
        {
            if (uu / 2 <= 100000 && uu / 2 > 0 && visited.find(uu / 2) == visited.end())
            {
                if (proibido.find(uu / 2) != proibido.end())
                    continue;

                if (uu / 2 == dest)
                    return u.count + 1;

                next.push({uu / 2, u.count + 1});
                visited.insert(uu / 2);
            }
        }
    }

    return -1;
}

int main()
{
    int o, d, k;

    while (scanf("%d%d%d", &o, &d, &k) && o && d)
    {
        set<int> proibido;
        int p;
        for (int i = 0; i < k; i++)
        {
            scanf("%d", &p);
            proibido.insert(p);
        }

        printf("%d\n", bfs(o, d, proibido));
    }
}