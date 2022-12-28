//2497
#include <stdio.h>
int main()
{
	int n, c, e=0;
	while(scanf("%d",&n)&&n>-1)
	{
		c = n/2;
		printf("Experiment %d: %d full cycle(s)\n",++e, c);
	}
	
	return 0;
}
