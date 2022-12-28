//1585
#include <stdio.h>
int main()
{
	int e, d1, d2;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d%d",&d1,&d2);
		printf("%d cm2\n",(d1*d2)/2);
	}
	
	return 0;
}
