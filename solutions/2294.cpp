//2294
#include <bits/stdc++.h>
using namespace std;
#define EXIT 0
#define WALL 2
#define Elf 3
#define Y first
#define X second

typedef pair<int, int> ii;

int Map[11][11];
int dist[11][11];

int floodfill(int y, int x, int row, int col)
{
	int mx[] = {0, 1, 0, -1};
	int my[] = {1, 0, -1, 0};
	queue<ii> next;
	
	dist[y][x] = 0;
	next.push(ii(y,x));
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int adj = 0; adj < 4; adj++)
		{
			int i = u.Y + my[adj];
			int j = u.X + mx[adj];
			
			if(i >= 0 && j >=0 && i < row &&
			   j < col && Map[i][j] != WALL)
			   {
				   dist[i][j] = dist[u.Y][u.X] + 1;
				   
				   if(Map[i][j] == EXIT)
					   return dist[i][j];
					   
				   Map[i][j] = 2;
				   next.push(ii(i,j));
			   }
		}
	}

	return INT_MAX;
}

int main()
{
	int row, col;
	
	cin >> row >> col;
	
	int ix, iy;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			cin >> Map[i][j];
			if(Map[i][j] == Elf)
				ix = j, iy = i;
		}
	}
	
	int resp = floodfill(iy, ix, row, col);
	
	cout << resp << endl;
}