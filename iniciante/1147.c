//1147
#include <stdio.h>

int main()
{	
	int tst = 0;
	
	while(1)
	{
		char c[3];
		
		scanf("%s",c);
		getchar();
		
		if(c[0] == '0')
			break;
			
		char board[8][8] = {{},{}};
		
		int cx = c[0] - '1';
		int cy = c[1] - 'a';
		
		board[cx][cy] = 'C';
		
		int i;
		for(i = 0; i < 8; i++)
		{
			char xy[3];
			
			scanf("%s",xy);
			getchar();
			
			int x = xy[0] - '1';
			int y = xy[1] - 'a';
			
			board[x][y] = 'P';
		}
		
		int mx[] = {-2, -2, -1, 1, 2, 2, -1, 1};
		int my[] = {-1, 1, -2, -2, -1, 1, 2, 2};
		int moves = 0;
		
		for(i = 0; i < 8; i++)
		{
			int px = cx + mx[i];
			int py = cy + my[i];
			
			if(px >= 0 && px < 8 && py >=0 && py < 8 &&
			  (board[px+1][py-1] != 'P' &&
			   board[px+1][py+1] != 'P'))
				moves++;
		}
		
		printf("Caso de Teste #%d: %d movimento(s).\n",++tst, moves);
	}
	
	return 0;
}