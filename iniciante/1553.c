//1553
#include <stdio.h>
#include <string.h>
int main()
{
	int nc, n, vbase[100], i, c=0;
	memset(vbase,0,sizeof(int)*100);
	while(scanf("%d%d",&nc,&n)&&nc&&n)
	{
		int v[nc];
		for(i=0;i<nc;i++)
		{
			scanf("%d",&v[i]);
			vbase[v[i]]++;
		}
		for(i=0;i<100;i++)
		{
			if(vbase[i]>=n)
				c++;
		}
		printf("%d\n",c);
		c=0;
		memset(vbase,0,sizeof(int)*100);
	}
	
	return 0;
}