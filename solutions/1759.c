//1759.c
#include <stdio.h>
int main()
{
	int n, i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<n) printf("Ho ");
		else printf("Ho!\n");
	}
	
	return 0;
}