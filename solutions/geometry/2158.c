//2158
#include <stdio.h>
long long int np, nh, c=0, atm, lig;
long long int aresta(long long int np, long long int nh)
{
	long long int a;
	a = (np*5 + nh*6)/2;
	return a;
}

long long int vertice(long long int f)
{
	long long int v;
	v = aresta(np, nh) - f + 2;
	return v;
}

int main()
{
	while(scanf("%lld%lld",&np,&nh)!=EOF)
	{
		atm=vertice(np+nh);
		lig=aresta(np,nh);
		printf("Molecula #%lld.:.\n",++c);
		printf("Possui %lld atomos e %lld ligacoes\n\n",atm,lig);
	}
	
	return 0;
}