//1161
#include <stdio.h>
long long int fat(int num)
{
	long long int r;
	if(num==0||num==1)
		return 1;
	r = num*fat(num-1);
	return r;
}
int main()
{
	int a, b;
	long long int soma;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		soma=fat(a)+fat(b);
		printf("%lld\n",soma);
	}
	
	return 0;
}