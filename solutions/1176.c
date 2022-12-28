//1176.c
#include <stdio.h>
int main()
{
	long long int f[61], e, n;
	int i;
	f[0]=0;f[1]=f[2]=1;
	for(i=3;i<61;i++)
		f[i]=f[i-1]+f[i-2];
	scanf("%lld",&e);
	for(i=0;i<e;i++)
	{
		scanf("%lld",&n);
		printf("Fib(%lld) = %lld\n",n,f[n]);
	}
	
	return 0;
}