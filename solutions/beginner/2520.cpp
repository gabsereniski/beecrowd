//2520
#include <bits/stdc++.h>
using namespace std;

typedef pair <int, int> ii;
#define i first
#define j second

int grid[101][101];

int main()
{
	int m, n;
	
	while(cin >> m >> n)
	{
		ii vc, pk;
				
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
			{
				cin >> grid[i][j];
				
				if(grid[i][j] == 1)
					vc.i = i, vc.j = j;
				
				else if(grid[i][j] == 2)
					pk.i = i, pk.j = j;
			}		
		
		int dist = abs(vc.i - pk.i) + abs(vc.j - pk.j);
		
		cout << dist << endl;
	}
}