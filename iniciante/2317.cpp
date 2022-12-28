//2317
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

#define y first
#define x second
#define sheep first
#define wolf second

char farm[251][251];
int row, col;

ii floodfill(int y, int x)
{
	int mx[] = {0, 0,  1,  0, -1};
	int my[] = {0, 1,  0, -1,  0};
	queue<ii> next;
	ii c = {{},{}};
	
	next.push(ii(y, x));
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int a = 0; a < 5; a++)
		{
			int i = u.y + my[a];
			int j = u.x + mx[a];
			
			if(i >= 0 && j >= 0 && i < row &&
			   j < col && farm[i][j] != '#')
			{
				if(farm[i][j] == 'k')
					c.sheep++;
				if(farm[i][j] == 'v')
					c.wolf++;
				
				farm[i][j] = '#';
				next.push(ii(i, j));
			}
		}
	}
	
	return c;
}

int main()
{
	cin >> row >> col;
	
	for(int i = 0; i < row; i++)	
		for(int j = 0; j < col; j++)
			cin >> farm[i][j];
	
	
	ii alive = {{},{}};
	
	for(int i = 0; i < row; i++)
		for(int j = 0; j < col; j++)
		{
			if(farm[i][j] != '#')
			{
				ii f = floodfill(i, j);
				
			
				if(f.sheep > f.wolf)
					alive.sheep += f.sheep;
				else
					alive.wolf  += f.wolf;
			}
		}
	
	printf("%d %d\n", alive.sheep, alive.wolf);
}