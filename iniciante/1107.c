//1107
#include <stdio.h>

int main()
{
	int a, c;
	
	while(scanf("%d%d",&a,&c) && a && c)
	{
		int i, ant = a, at, cont = 0;
		
		for(i = 0; i < c; i++)
		{
			scanf("%d",&at);
			
			if(at < ant)
				cont += (ant - at);
			
			ant = at;
		}
		
		printf("%d\n", cont);
	}
	
	return 0;
}