#include <stdio.h>
long int crivo(int p)
{
	long long int i;
	
	if(p==1) return 0;
	
	if(p==2) return 1;
	
	if(!(p%2) || !(p%3)) return 0;
	
	for(i = 5;i*i<=p;i+=2)
		if(!(p%i)) return 0;
	
	return 1;
}

int main()
{
	long long int e, p;
	scanf("%lld",&e);
	while(e--)
	{
		scanf("%lld",&p);
		if(crivo(p))
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}
	
	return 0;
}