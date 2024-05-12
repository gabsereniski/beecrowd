//2412
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
	int arvore, alcance;
	
	cin >> arvore >> alcance;
	
	int x[arvore], y[arvore];
	
	for(int i = 0; i < arvore; i++)
		cin >> x[i] >> y[i];
		
	vector<int> graph[arvore];
		
	for(int u = 0; u < arvore; u++)
	{
		for(int v = 0; v < arvore; v++)
		{
			if(u != v && hypot(x[v]-x[u], y[v]-y[u]) <= alcance)
			{
				graph[u].push_back(v);
				graph[v].push_back(u);
			}
		}
	}
	
	bool visited[1002] = {};
	bool consegue = true;
	
	dfs(graph, visited, 0);
	
	for(int i = 0; i < arvore; i++)
	{
		if(!visited[i])
		{
			printf("N\n");
			consegue = false;
			break;
		}
	}
	
	if(consegue)
		printf("S\n");
}