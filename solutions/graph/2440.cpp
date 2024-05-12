//2440
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> graph[], bool visited[], int u)
{
	visited[u] = true;
	
	for(int j = 0; j < (int)graph[u].size(); j++)
	{
		int v = graph[u][j];
		
		if(!visited[v])
			dfs(graph, visited, v);
	}
}

int main()
{
	int vertex, edge;
	
	cin >> vertex >> edge;
	
	vector<int> graph[vertex];
	
	for(int e = 0; e < edge; e++)
	{
		int u, v;
		
		cin >> u >> v;
		
		graph[u-1].push_back(v-1);
		graph[v-1].push_back(u-1);
	}
	
	bool visited[100000] = {};
	int families = 0;
	
	for(int u = 0; u < vertex; u++)
	{
		if(!visited[u])
		{
			families++;
			dfs(graph, visited, u);
		}
	}
	
	cout << families << endl;
}