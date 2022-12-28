//2300
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
	int vertices, arests, tst = 0;
	
	while((cin >> vertices >> arests) && vertices && arests)
	{
		vector<int> graph[vertices];
		int u, v;
		
		for(int i = 0; i < arests; i++)
		{
			cin >> u >> v;
			
			graph[u-1].push_back(v-1);
			graph[v-1].push_back(u-1);
		}
		
		bool visited[102] = {};
		bool falha = false;
		
		dfs(graph, visited, 0);
		
		cout << "Teste " << ++tst << endl;
		for(int i = 0; i < vertices; i++)
			if(!visited[i])
			{
				printf("falha\n");
				falha = true;
				break;
			}
		
		if(!falha)
			printf("normal\n");
		
		puts("");
	}
}