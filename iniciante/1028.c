//1028
#include <stdio.h>
int mdc(int a, int b)
{
	int aux;
	while(a)
	{
		aux=a;
		a=b%a;
		b=aux;
	}
	return b;
}

int main()
{
	int n, a, b;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",mdc(a,b));
	}
	
	return 0;
}