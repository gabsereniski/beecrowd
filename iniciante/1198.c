//1198
#include <stdio.h>
int main()
{
	long long int a, b, aux;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		if(a>b)
		{
			aux=b;
			b=a;
			a=aux;
		}
		printf("%lld\n",b-a);
	}
	
	return 0;
}
