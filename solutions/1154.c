//1154.c
#include <stdio.h>
int main()
{
	int n, i=0, si=0;
	scanf("%d",&n);
	while(n>=0)
	{
		i++;
		si+=n;
		scanf("%d",&n);
	}
	printf("%.2f\n",(float)si/i);
	
	return 0;
}