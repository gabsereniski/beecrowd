//2540
#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		float v, soma=0, c=0;
		while(n--)
		{
			scanf("%f",&v);
			soma+=v;
			c++;
		}
		if(soma>=(2.0/3.0)*c)
			printf("impeachment\n");
		else printf("acusacao arquivada\n");
		soma=0;
	}
	
	return 0;
}