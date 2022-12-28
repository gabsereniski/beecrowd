//1925
#include <bits/stdc++.h>
using namespace std;

#define y first
#define x second

#define condition i >= 0 && j >= 0 && i < row && j < col && grid.m[i][j] != 'b' && grid.m[i][j] != '*' && sits[i][j] != c

typedef pair<int, int> ii;

typedef struct
{
	char m[1002][1002];
} matriz;

int sits[1002][1002];
matriz grid;

int floodfill(int y, int x, int row, int col, int c)
{
	int my[] = {1,  0, -1,  0};
	int mx[] = {0,  1,  0, -1};
	int novinhas = 0;
	queue<ii> next;
	
	next.push(ii(y, x));
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int adj = 0; adj < 4; adj++)
		{
			int i = u.y + my[adj];
			int j = u.x + mx[adj];
			
			if(condition)
			{
				novinhas++;
				
				sits[i][j] = c;
				next.push(ii(i, j));
			}
		}
	}
	
	return novinhas;
}

int main()
{
	int n, m;
	vector<ii> chair;
		
	scanf("%d%d", &n, &m);
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		{
			scanf(" %c", &grid.m[i][j]);
			
			if(grid.m[i][j] == '*')
				chair.push_back(ii(i, j));
			
		}
	
	int novinhas;
	int maxnovinhas = 0;
	int y, x;
	
	for(int c = 0; c < (int)chair.size(); c++)
	{
		int i = chair[c].y;
		int j = chair[c].x;
		novinhas = floodfill(i, j, n, m, c + 1);
				
		if(novinhas > maxnovinhas)
		{
			maxnovinhas = novinhas;
			y = i + 1, x = j + 1;
		}
	}

	printf("%d,%d\n", y, x);
}