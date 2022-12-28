//1177
#include <stdio.h>
#define max 1000
int main()
{
	int n[max], t, i, j;
	scanf("%d",&t);
	
	for(i=0,j=0;i<max;i++)
	{
		n[i]=j;
		j++;
		if(j==t) j=0;
		printf("N[%d] = %d\n",i,n[i]);
	}
	
	
	return 0;
}