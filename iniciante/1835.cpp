//1835
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
	int casos;
	
	cin >> casos;
	
	for(int c = 1; c <= casos; c++)
	{
		int vertex, edge;
		
		cin >> vertex >> edge;
		
		vector<int> graph[vertex];
		
		for(int i = 0; i < edge; i++)
		{
			int u, v;
			
			cin >> u >> v;
			
			graph[u-1].push_back(v-1);
			graph[v-1].push_back(u-1);
		}
		
		bool visited[102] = {};
		int counter = -1;
		
		for(int u = 0; u < vertex; u++)
		{
			if(!visited[u])
			{
				counter++;
				dfs(graph, visited, u);
			}
		}
		
		printf("Caso #%d: ", c);
		if(!counter)
			printf("a promessa foi cumprida\n");
		else
			printf("ainda falta(m) %d estrada(s)\n",counter);
	}
}