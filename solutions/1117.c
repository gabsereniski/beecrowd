//1117.c
#include <stdio.h>
int main()
{
	float X, Y;
	scanf("%f",&X);
	while((X<0)||(X>10)) 
	{
		printf("nota invalida\n");
		scanf("%f",&X);
	}
	scanf("%f",&Y);
	while((Y<0)||(Y>10)) 
	{
		printf("nota invalida\n");
		scanf("%f",&Y);
	}
	printf("media = %.2f\n",(X+Y)/2.0);
	
	return 0;
}