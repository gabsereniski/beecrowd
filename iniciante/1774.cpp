//1774
#include <bits/stdc++.h>
//lembra de colocar essa droga plmdds
using namespace std;

/*no pair o nome padrão é first e second
  definir assim fica mais facil de entender
  o que você ta fazendo*/
#define COST first
#define VERTEX second

typedef pair<int,int> ii;

int prim(vector<ii> graph[], int N)
{
	/*inverte prioridade de maior pra menor
	  se quiser maior custo coloca pair normal
	  no caso priority_queue<ii> next;*/
	
	priority_queue<ii, vector<ii>, greater<ii>> next;
	vector<int> visited(N, 0);
	
	int cost = 0;
	
	next.push(ii(0, 0));
	
	while(!next.empty())
	{
		ii u = next.top();
		next.pop();
		
		if(visited[u.VERTEX])
			continue;
		
		cost += u.COST;
		visited[u.VERTEX] = 1;
		
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
	int R, C;
	
	cin >> R >> C;
	vector<ii> graph[R];
	
	for(int i = 0; i < C; i++)
	{
		int u, v, p;
		
		cin >> u >> v >> p;
		
		graph[u-1].push_back(ii(p, v-1));
		graph[v-1].push_back(ii(p, u-1));
	}
	
	cout << prim(graph, R) << endl;
}