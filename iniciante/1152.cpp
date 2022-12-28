//1152
#include <bits/stdc++.h>
using namespace std;

#define cost first
#define node second

typedef pair<int, int> ii;

int prim(vector<ii> graph[], int size)
{
	priority_queue<ii, vector<ii>, greater<ii>> next;
	vector<int> visited(size, 0);
	int cost = 0;
	
	next.push(ii(0, 0));
	
	while(!next.empty())
	{
		ii u = next.top();
		next.pop();
		
		if(visited[u.node]) continue;
		
		cost += u.cost;
		visited[u.node] = 1;
		
		for(int j = 0; j < (int)graph[u.node].size(); j++)
		{
			ii v = graph[u.node][j];
			if(!visited[v.node]) next.push(v);
		}
	}
	
	return cost;
}

int main()
{
	int nodes, edges;
	
	while((cin >> nodes >> edges) && nodes && edges)
	{
		vector<ii> graph[nodes];
		int total_cost = 0;
		
		for(int e = 0; e < edges; e++)
		{
			int u, v, cost;
			
			cin >> u >> v >> cost;
			
			total_cost += cost;
			graph[u].push_back(ii(cost, v));
			graph[v].push_back(ii(cost, u));
		}
		
		cout << total_cost - prim(graph, nodes) << endl;
	}
}