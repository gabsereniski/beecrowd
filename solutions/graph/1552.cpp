//1552
#include <bits/stdc++.h>
using namespace std;
#define DIST first
#define VERTEX second

typedef pair<double,int> ii;

double dist(int x1, int y1, int x2, int y2)
{
	return sqrt((pow((x2 - x1), 2) + pow((y2 - y1),2)));
}

double prim(vector<ii> graph[], int N)
{
	priority_queue<ii, vector<ii>, greater<ii>> next;
	vector<bool> visited(N, false);
	
	double cost = 0;
	
	next.push(ii(0, 0));
	
	while(!next.empty())
	{
		ii u = next.top();
		next.pop();
		
		if(visited[u.VERTEX])
			continue;
		
		cost += u.DIST;
		visited[u.VERTEX] = true;
		
		for(int j = 0; j < (int)graph[u.VERTEX].size(); j++)
		{
			ii v = graph[u.VERTEX][j];
			
			if(!visited[v.VERTEX])
				next.push(v);
		}
	}
	
	return cost;
}
	
int main()
{
	int casos;
	
	cin >> casos;
	
	while(casos--)
	{
		int pessoas, x[502] = {}, y[502] = {};
		
		cin >> pessoas;
		
		for(int i = 0; i < pessoas; i++)
			cin >> x[i] >> y[i];
			
		vector<ii> graph[pessoas];
			
		for(int u = 0; u < pessoas; u++)
			for(int v = 0; v < pessoas; v++)
			{
				if(u != v)
				{
					double d = dist(x[u], y[u], x[v], y[v]);
					graph[u].push_back(ii(d, v));
				}
			}
		
		double comp = prim(graph, pessoas)/100.0;
		
		printf("%.2lf\n",comp);
	}
}