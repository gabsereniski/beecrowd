//1116.c
#include <stdio.h>
int main()
{
	int X, Y, N, i;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d%d",&X,&Y);
		if(!Y) printf("divisao impossivel\n");
		else printf("%.1f\n",(float)X/(float)Y);
	}
	
	return 0;
}