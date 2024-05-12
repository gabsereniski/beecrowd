//tiles
#include <bits/stdc++.h>
using namespace std;

#define Y first
#define X second

typedef pair<int, int> ii;

char grid[1001][1001];
int coast[1001][1001] = {{},{}};

void floodfill(int y, int x, int row, int col)
{
	int mx[] = {0, 1, 0, -1};
	int my[] = {1, 0, -1, 0};
	queue<ii> next;
	
	next.push(ii(y, x));
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int adj = 0; adj < 4; adj++)
		{				
			int i = u.Y + my[adj];
			int j = u.X + mx[adj];
			
			if(i < 0 || j < 0 || i >= row ||
		       j >= col || grid[i][j] == '.')
				coast[u.Y][u.X] = 1;
		       
			if(i >= 0 && j >= 0 && i < row &&
			   j < col && grid[i][j] == '#')
			{
				grid[i][j] = '/';
				next.push(ii(i, j));
			}
		}
	}
}

int main()
{
	int row, col;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			cin >> grid[i][j];
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			if(grid[i][j] != '.')
				floodfill(i, j, row, col);
	
	int c = 0;
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			c += coast[i][j];
		
	
	printf("%d\n", c);
}