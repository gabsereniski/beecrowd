//moves
#include <bits/stdc++.h>
using namespace std;

#define Y first
#define X second

typedef pair<int, int> ii;

int board[8][8] = {{},{}};
int moves[8][8] = {{},{}};

int floodfill(int y, int x)
{
	if(board[y][x] == 2) return 0;
	
	int row = 8, col = 8;
	int mx[] = {-2, -2, -1, 1, 2, 2, -1, 1};
	int my[] = {-1, 1, -2, -2, -1, 1, 2, 2};
	queue<ii> next;
	
	moves[y][x] = 0;
	next.push(ii(y, x));
	
	while(!next.empty())
	{
		ii u = next.front();
		next.pop();
		
		for(int a = 0; a < 8; a++)
		{
			int i = u.Y + my[a];
			int j = u.X + mx[a];
			
			if(i>=0 && j>=0 && i<row && j<col && board[i][j] != 1)
			{
				moves[i][j] = moves[u.Y][u.X] + 1;
				
				if(board[i][j] == 2) return moves[i][j];
				
				board[i][j] = 1;
				next.push(ii(i, j));
			}
		}
	}
	
	return INT_MAX;
}

int main()
{
	char x1, y1, x2, y2;
	
	while(scanf("%c%c %c%c", &x1, &y1, &x2, &y2) != EOF)
	{
		getchar();
		
		memset(board, 0, sizeof board);
		memset(moves, 0, sizeof board);
		
		board[y1 - '1'][x1 - 'a'] = 3;
		board[y2 - '1'][x2 - 'a'] = 2;
		
		int m = floodfill(y1 - '1', x1 - 'a');
		
		printf("To get from %c%c to %c%c takes %d knight moves.\n",
		        x1, y1, x2, y2, m);
	}
}