//2533
#include <stdio.h>
int main()
{
	float soma1=0, soma2=0, div, n, c, e;
	while(scanf("%f",&e)!=EOF)
	{
		while(e--)
		{
			scanf("%f%f",&n,&c);
			soma1+=(n*c);
			soma2+=(c*100);
		}
		div = soma1/soma2;
		printf("%.4f\n",div);
		soma1=0; soma2=0;
	}
	return 0;
}