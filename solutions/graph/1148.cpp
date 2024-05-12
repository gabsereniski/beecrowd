//1148
#include <bits/stdc++.h>
using namespace std;

// esse código tá errado, não usar de referencia

#define INF 1001001001
#define cost first
#define id second

typedef pair<int, int> ii;

int dijkstra(vector<ii> graph[], int src, int to, int size)
{
	priority_queue<ii> next;
	int dist[size + 1];

	fill(dist, dist + size, INF);

	dist[src] = 0;
	next.push(ii(0, src));

	while(!next.empty())
	{
		int cost = next.top().cost;
		int at = next.top().id;
		next.pop();

		if(cost != dist[at]) continue;

		for(int j = 0; j < (int)graph[at].size(); j++)
		{
			ii v = graph[at][j];
			int weight = v.cost;
			int adj = v.id;

			if(cost + weight < dist[adj])
			{
				dist[adj] = cost + weight;
				next.push(ii(dist[adj], adj));
			}
		}
	}

	return dist[to] == INF ? -1 : dist[to];
}

int main()
{
	int n, e;

	while((cin >> n >> e) && n)
	{
		vector<ii> graph[n];
		bool has_path[502][502] = {{},{}};

		for(int i = 0; i < e; i++)
		{
			int u, v, t;

			cin >> u >> v >> t;
			u--, v--;

			graph[u].push_back(ii(t, v));
			has_path[u][v] = true;

			if(has_path[v][u])
			{
				graph[u][(int)graph[u].size()-1].cost = 0;

				int j = 0;

				while(graph[v][j].id != u) j++;
				graph[v][j].cost = 0;
			}
		}

		int q;

		cin >> q;

		while(q--)
		{
			int u, v;

			cin >> u >> v;
			u--, v--;

			int ans = dijkstra(graph, u, v, n);

			(ans == -1) ? cout << "Nao e possivel entregar a carta\n" :
			              cout << ans << endl;
		}
		puts("");
	}
}