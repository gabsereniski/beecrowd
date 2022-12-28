//1118.c
#include <stdio.h>
int main()
{
	float n1, n2;
	int c;
	c = 1;
	while(c==1)
	{
		scanf("%f",&n1);
		while(n1<0||n1>10)
		{
			printf("nota invalida\n");
			scanf("%f",&n1);
		}
		scanf("%f",&n2);
		while(n2<0||n2>10)
		{
			printf("nota invalida\n");
			scanf("%f",&n2);
		}
		
		printf("media = %.2f\n",(n1+n2)/2);
		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&c);
		while(c<1||c>2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&c);
		}
	}
	
	return 0;
}