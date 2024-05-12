//1962.c
#include <stdio.h>
int main()
{
	int e, n, a;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d",&n);
		a=n-2015;
		if(a>=0)
			printf("%d A.C.\n",a+1);
		else
			printf("%d D.C.\n",-a);
		e--;
	}
	
	return 0;
}