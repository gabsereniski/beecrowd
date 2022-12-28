//2359
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

#define INF 1001001001
#define cost first
#define id second


int dijkstra(vector<ii> G[], bool has_h[], int src, int size)
{
	priority_queue<ii, vector<ii>, greater<ii>> pq;
	int cost[size + 1]; fill(cost, cost + size + 1, INF);
	
	cost[src] = 0;
	pq.push(ii(0, src));
	
	while(!pq.empty())
	{
		ii u = pq.top(); pq.pop();
		
		if(has_h[u.id]) return cost[u.id];
		if(cost[u.id] != u.cost) continue;
		
		for(int j = 0; j < (int)G[u.id].size(); j++)
		{
			ii v = G[u.id][j];
			
			if(cost[u.id] + v.cost < cost[v.id])
			{
				cost[v.id] = cost[u.id] + v.cost;
				pq.push(ii(cost[v.id], v.id));
			}
		}
	}
	
	return INF;
}		

int main()
{
	int n, m, q;
	
	while(scanf("%d%d%d", &n, &m, &q) != EOF)
	{
		vector<ii> G[n];
		bool has_h[n];
		fill(has_h, has_h + n, false);
		
		for(int a = 0; a < m; a++)
		{	
			int u, v, w;
			
			scanf("%d%d%d", &u, &v, &w);
			u--, v--;
			
			G[u].push_back(ii(w, v));
			G[v].push_back(ii(w, u));
		}
		
		while(q--)
		{
			int h;
			
			scanf("%d", &h);
			h--;
			
			has_h[h] = true;
		}
		
		int t = 0;
		
		for(int u = 0; u < n; u++)
		{
			if(!has_h[u])
			{
				int tl = dijkstra(G, has_h, u, n);
				if(tl > t) t = tl;
			}
		}
		
		printf("%d\n", t);
	}
}

/*

4 4 1
1 2 3
2 3 1
4 2 2
4 3 4
4
5 8 5
1 2 1
2 3 2
5 4 3
1 4 4
1 5 5
2 5 6
4 3 7
2 4 8
1
2
3
4
5

*/