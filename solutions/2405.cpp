//2405
#include <bits/stdc++.h>
using namespace std;

#define Y first
#define X second
#define WALL 1

int grid[201][201] = {{},{}};
int pntd[201][201] = {{},{}};

int dfs(int x, int y, int row, int col)
{
	int area = 1;
	int mx[] = {-1, -1, -1,  0,  0,  1,  1,  1};
	int my[] = {-1,  0,  1, -1,  1, -1,  0,  1};
	int i, j;
	
	pntd[x][y] = 1;
	
	for(int a = 0; a < 8; a++)
	{
		i = x + mx[a];
		j = y + my[a];
		
		if(i < 0 || i >= row || j < 0 || j >= col ||
		   grid[i][j] || pntd[i][j]) continue;
		
		area += dfs(i, j, row, col);
	}
	
	return area;
}

int main()
{
	int row, col, x, y, k;
	
	cin >> row >> col >> x >> y >> k;
	
	for(int i = 0; i < k; i++)
	{
		int xw, yw;
		
		cin >> xw >> yw;
		
		grid[xw-1][yw-1] = 1;
	}
	
	int p = dfs(x-1, y-1, row, col);
	
	printf("%d\n", p);
}