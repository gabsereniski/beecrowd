//tiles
#include <bits/stdc++.h>
using namespace std;

#define Y first
#define X second

typedef pair<int, int> ii;

int mosaic[201][201];
int area = INT_MAX;

int floodfill(int y, int x, int row, int col)
{
	int area = 0;
	int mx[] = {0, 1, 0, -1};
	int my[] = {1, 0, -1, 0};
	queue<ii> next;
	
	next.push(ii(y, x));
	
	int cur = mosaic[y][x];
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int adj = 0; adj < 4; adj++)
		{
			int i = u.Y + my[adj];
			int j = u.X + mx[adj];
			
			if(i >= 0 && j >= 0 && i < row &&
			   j < col && mosaic[i][j] == cur)
			{
				mosaic[i][j] = 4;
				area++;
				next.push(ii(i, j));
			}
		}
	}
	
	return area;
}

int main()
{
	int row, col;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			cin >> mosaic[i][j];
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
		{
			if(mosaic[i][j] != 4)
			{
				int x = floodfill(i, j, row, col);
				if(x < area) area = x;
			}
		}
	
	printf("%d\n", area ? area : 1);
}