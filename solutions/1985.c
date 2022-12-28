//1985
#include <stdio.h>
int main()
{
	int c, e, n;
	float p=0;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d%d",&c,&n);
		switch(c)
		{
			case 1001: p+=(n*1.50); break;
			case 1002: p+=(n*2.50); break;
			case 1003: p+=(n*3.50); break;
			case 1004: p+=(n*4.50); break;
			case 1005: p+=(n*5.50); break;
		}
		e--;
	}
	printf("%.2f\n",p);
	
	return 0;
}