//1146.c
#include <stdio.h>
int main()
{
	int e, n, i;
	scanf("%d",&n);
	while(n)
	{
		for(i=1;i<=n;i++)
		{
			if(i<n) printf("%d ",i);
			else printf("%d\n",i);
		}
		scanf("%d",&n);
	}
	
	return 0;
}