//1542.c
#include <stdio.h>
int main()
{
	int a, b, c;
	double pg;
	while(scanf("%d",&a)&&a)
	{
		scanf("%d%d",&b,&c);
		pg = (a*b*c)/(c-a);
		if(pg>1)
			printf("%.0lf paginas\n",pg);
		else printf("%.0lf pagina\n",pg);
	}	
	return 0;
}