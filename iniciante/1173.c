//1173.c
#include <stdio.h>
int main()
{
	int v, N[10], i;
	scanf("%d",&v);
	N[0]=v;
	for(i=1;i<10;i++)
		N[i]=2*N[i-1];
	for(i=0;i<10;i++)
		printf("N[%d] = %d\n",i,N[i]);
	
	return 0;
}