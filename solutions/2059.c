//2059
#include <stdio.h>
int main()
{
	int p, j1, j2, r, a;
	scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
	printf("Jogador ");
	if(r && !a)
		printf("1 ");
	else if(r && a)
		printf("2 ");
	else if(!r && a)
		printf("1 ");
	else if(p)
	{
		if((j1+j2)%2)
			printf("2 ");
		else printf("1 ");
	}
	else if(!p)
	{
		if((j1+j2)%2)
			printf("1 ");
		else printf("2 ");
	}
	printf("ganha!\n");
	
	return 0;
}