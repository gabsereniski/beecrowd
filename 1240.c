//1240
#include <stdio.h>
#include <math.h>
int main()
{
	long long int e, a, b, div, exp;
	scanf("%lld",&e);
	while(e--)
	{
		scanf("%lld%lld",&a,&b);
		exp = log10(b);
		exp++;
		div=pow(10,exp);
		if((a-b)%div)
			printf("nao encaixa\n");
		else printf("encaixa\n");
	}
	
	return 0;
}
