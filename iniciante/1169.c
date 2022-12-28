//1169
#include <stdio.h>
#include <math.h>
int main()
{
	int e, n, i;
	long long int soma=0, r;		
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d",&n);
		r=(pow(2,n))/12000;
		printf("%lld kg\n",r);
		soma=0;
	}
	
	return 0;
}
