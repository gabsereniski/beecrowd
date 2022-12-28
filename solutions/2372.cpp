//f
#include <bits/stdc++.h>
using namespace std;

#define COST first
#define ID second

typedef pair<int, int> ii;

int dijkstra(vector<ii> graph[], int src, int size)
{
	vector<int> cost(size, INT_MAX);
	queue<int> next;
	
	cost[src] = 0;
	next.push(src);
	
	while(!next.empty())
	{
		int u = next.front();
		next.pop();
		
		for(int j = 0; j < (int)graph[u].size(); j++)
		{
			ii v = graph[u][j];
			
			if(cost[v.ID] > cost[u] + v.COST)
			{
				cost[v.ID] = cost[u] + v.COST;
				next.push(v.ID);
			}
		}
	}
	
	int m = INT_MIN;
	
	for(int u = 0; u < size; u++)
	{
		if(cost[u] > m)
		m = cost[u];
	}
	
	return m;	
}

int main()
{
	int nodes, edges;
	
	cin >> nodes >> edges;
	
	vector<ii> graph[nodes];
	
	for(int e = 0; e < edges; e++)
	{
		int u, v, w;
		
		cin >> u >> v >> w;
		
		graph[u].push_back(ii(w, v));
		graph[v].push_back(ii(w, u));
	}
	
	int m = INT_MAX;
	
	for(int u = 0; u < nodes; u++)
	{
		int d = dijkstra(graph, u, nodes);
		if(d < m) m = d;
	}
	
	cout << m << endl;
}