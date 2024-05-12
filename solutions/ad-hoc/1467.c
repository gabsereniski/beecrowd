//1467
#include <stdio.h>
int main()
{
	int a, b, c;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a==b && b!=c)
			printf("C\n");
		else if(a==c && c!=b)
			printf("B\n");
		else if(b==c && c!=a)
			printf("A\n");
		else if (a==b && b==c)
			printf("*\n");
	}
	
	return 0;
}