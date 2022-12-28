//querm.c
#include <stdio.h>
int main()
{
	int n, i, v, e, c=0;
	while(scanf("%d",&n)&&n)
	{
		c++;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&e);
			if(e==i) v=i;
		}
		
		printf("Teste %d\n%d\n",c,v);
		printf("\n");
	}
	
	return 0;
}
