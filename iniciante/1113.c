//1113.c
#include <stdio.h>
int main()
{
	int X, Y;
	scanf("%d%d",&X,&Y);
	while(X!=Y)
	{
		if(X<Y) printf("Crescente\n");
		else printf("Decrescente\n");
		scanf("%d%d",&X,&Y);
	}
	
	return 0;
}