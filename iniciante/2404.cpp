//2402
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
#define cost first
#define id second

int prim(vector<ii> g[], int size)
{
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	vector<bool> visited(size, false);
	int dist = 0;
	
	pq.push(ii(0, 0));
	
	while(!pq.empty())
	{
		ii u = pq.top(); pq.pop();
		
		if(visited[u.id]) continue;
			
		dist += u.cost;
		visited[u.id] = true;
		
		for(int j = 0; j < (int)g[u.id].size(); j++)
		{
			ii v = g[u.id][j];
			if(!visited[v.id]) pq.push(v);
		}	
	}
	
	return dist;
}
	
int main()
{
	int n, e;
	
	scanf("%d%d", &n, &e);
	
	vector<ii> G[n];
	
	while(e--)
	{
		int u, v, c;
		
		scanf("%d%d%d", &u, &v, &c);
		u--, v--;
		
		G[u].push_back(ii(c, v));
		G[v].push_back(ii(c, u));
	}
	
	printf("%d\n", prim(G, n));
}