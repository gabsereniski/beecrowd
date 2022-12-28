//2544
#include <stdio.h>
#include <math.h>
int main()
{
	int n, r;
	while(scanf("%d",&n)!=EOF)
	{
		r = log2(n);
		printf("%d\n",r);
	}
	
	return 0;
}