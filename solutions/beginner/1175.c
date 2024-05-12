//1175.c
#include <stdio.h>
int main()
{
	int i,j,n[20],na;
	for(i=0;i<20;i++)
		scanf("%d",&n[i]);
	for(i=0,j=19;i<10;i++,j--)
	{
		na=n[i];
		n[i]=n[j];
		n[j]=na;
	}
	for(i=0;i<20;i++)
		printf("N[%d] = %d\n",i,n[i]);
	
	return 0;
}