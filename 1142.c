//1142.c
#include <stdio.h>
int main()
{
	int n, i, j=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d %d %d PUM\n",i+j,i+j+1,i+j+2);
		j+=3;
	}
	
	return 0;
}