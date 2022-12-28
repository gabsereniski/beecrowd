//1329
#include <stdio.h>
int main()
{
	int n, j;
	while(scanf("%d",&n)&&n)
	{
		int maria=0, joao=0;
		while(n--)
		{
			scanf("%d",&j);
			switch(j)
			{
				case 0: maria+=1; break;
				case 1: joao+=1; break;
			}
		}
		printf("Mary won %d times and John won %d times\n",maria,joao);
	}
	
	return 0;
}