//2230
#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> graph[], vector<int> &dist, int src, int size)
{
	queue<int> next;
	
	next.push(src);
	dist[src] = 0;
	
	while(!next.empty())
	{
		int u = next.front();
		next.pop();
		
		for(int j = 0; j < (int)graph[u].size(); j++)
		{
			int v = graph[u][j];
			
			if(dist[v] > dist[u] + 1)
			{
				dist[v] = dist[u] + 1;
				next.push(v);
			}
		}
	}
}
	
int main()
{
	int c, e, l, p;
	int tst = 0;
	
	while((cin >> c >> e >> l >> p) && (c + e + l + p))
	{
		vector<int> graph[c];
		
		for(int i = 0; i < e; i++)
		{
			int u, v;
			
			cin >> u >> v;
			
			graph[u-1].push_back(v-1);
			graph[v-1].push_back(u-1);
		}
		
		vector<int> dist(c, INT_MAX);
		
		bfs(graph, dist, l - 1, c);
	
		printf("Teste %d\n", ++tst);
		
		for(int v = 0; v < c; v++)
		{
			if(dist[v] && dist[v] <= p)
			{
				printf("%d", v + 1);
				if(v < c) printf(" ");
			}
		}
		
		printf("\n\n");
	}
	
	return 0;
}