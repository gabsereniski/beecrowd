//1907
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

char grid[1025][1025];

void floodfill(int x, int y, char cor, char nova_cor, int N, int M)
{
  if(x < 0 || x >= N || y < 0 || y >= M)
    return;
    
  if(grid[x][y] != cor)
    return;
    
  grid[x][y] = nova_cor;
   
  floodfill(x + 1, y, cor, nova_cor, N, M);
  floodfill(x - 1, y, cor, nova_cor, N, M);
  floodfill(x, y + 1, cor, nova_cor, N, M);
  floodfill(x, y - 1, cor, nova_cor, N, M);
}

int main()
{
	int row, col;
	
	cin >> row >> col;
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
			cin >> grid[i][j];
		
	int clicks = 0;
	
	for(int i = 0; i < row; i++)
	{
		for(int j = 0; j < col; j++)
		{
			if(grid[i][j] != 'o')
			{
				floodfill(i, j, '.', 'o', row, col);
				clicks++;
			}
		}
	}
	
	cout << clicks << endl;
}