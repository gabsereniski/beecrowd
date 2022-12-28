//rerisson
#include <bits/stdc++.h>
using namespace std;

#define M 1002

map<string, int> m;
int id = 0;

int add(string s)
{
	if(m.count(s)) return m[s];
	return m[s] = id++;
}

vector<int> graph[M];
int n;
int dist[M];

void bfs(vector<int> graph[], int src, int size)
{
	queue<int> next;
	
	fill(dist, dist + n, INT_MAX);
	
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
	int ps, g;
	
	string a, b;
	
	cin >> ps >> g;
	
	while(ps--)
	{
		cin >> a >> b;
		
		graph[add(a)].push_back(add(b));
		graph[add(b)].push_back(add(a));
	}
	
	n = m.size();
	
	map<string, int>::iterator R;
	
	R = m.find("Rerisson");
	
	bfs(graph, R->second, n);
	
	int p = 0;
	
	for(int i = 0; i < n; i++)
	{
		if(dist[i] && dist[i] <= g)
			p++;
	}
	
	printf("%d\n", p);
	
	int i = 0;
	
	for(auto it = m.begin(); it != m.end(); it++)
	{
		if(dist[it->second] && dist[it->second] <= g)
			cout << it->first << endl;
		i++;
	}
}