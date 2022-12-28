//uiki
#include <bits/stdc++.h>
using namespace std;

#define M 2000

map<string, int> m;
int id = 0;

int add(string s)
{
	if(m.count(s)) return m[s];
	return m[s] = id++;
}

vector<int> g[M];
int n;

int dist[M];

int bfs(int a, int b)
{
	queue<int> next;
	fill(dist, dist + n, -1);
	
	next.push(a);
	dist[a] = 0;
	
	while(1)
	{
		int u = next.front();
		next.pop();
		
		if(u == b) return dist[u];
		
		for(auto i : g[u])
		{
			if(dist[i] == -1)
			{
				dist[i] = dist[u] + 1;
				next.push(i);
			}
		}
	}
	
	return -1;
}

int main()
{
	int refs;
	string a, b;
	
	cin >> refs;
	
	while(refs--)
	{
		cin >> a >> b;
		g[add(a)].push_back(add(b));
	}
	
	map<string, int>::iterator it = m.begin(), it2 = m.begin();
	it++;
	
	for(; it != m.end(); it++, it2++)
	{
		g[it2->second].push_back(it->second);
		g[it->second].push_back(it2->second);
	}
	
	n = m.size();
	
	cin >> a >> b;
	cout << bfs(m[a], m[b]) << endl;
	
	return 0;
}