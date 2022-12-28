//2187
#include <stdio.h>
int main()
{
	int n50, n10, n5, n1, d, c=0;
	while(scanf("%d",&d)&&d)
	{
		c++;
		n50=d/50;
		d%=50;
		n10=d/10;
		d%=10;
		n5=d/5;
		d%=5;
		n1=d;
		
		printf("Teste %d\n%d %d %d %d\n",c,n50,n10,n5,n1);
		printf("\n");
	}
	
	return 0;
}