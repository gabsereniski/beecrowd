#include <bits/stdc++.h>
using namespace std;

#define cost first
#define node second

typedef pair<int, int> ii;

vector<ii> graph[1001];

bool check(int u, int v)
{
    for(auto &j : graph[u])
        if(j.node == v)
            return true;
        
    return false;
}

int prim(int size)
{
    priority_queue<ii, vector<ii>, greater<ii>> next;
    vector<bool> visited(size, 0);

    int total = 0;

    next.push(ii(0, 0));

    while(!next.empty())
    {
        ii u = next.top();
        next.pop();

        if(visited[u.node]) continue;

        total += u.cost <= 1000 ? u.cost : u.cost - 1000;
        visited[u.node] = true;

        for(int j = 0; j < (int)graph[u.node].size(); j++)
		{
			ii v = graph[u.node][j];
			if(!visited[v.node]) next.push(v);
		}
    }

    return total;
}


int main()
{
    int n, f, r;

    cin >> n >> f >> r;

    while(f--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        a--, b--;
        graph[a].push_back(ii(c, b));
        graph[b].push_back(ii(c, a));
    }

    while(r--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        a--, b--;

        if(check(a, b)) continue;

        graph[a].push_back(ii(c+1000, b));
        graph[b].push_back(ii(c+1000, a));

    }

    cout << prim(n) << endl;

}