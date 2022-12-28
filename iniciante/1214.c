//1214
#include <stdio.h>
int main()
{
	int e, a;
	scanf("%d",&e);
	while(e--)
	{
		int n[1000]={}, i, c=0;
		double soma=0, media, pct;
		scanf("%d",&a);
		for(i=0;i<a;i++)
		{
			scanf("%d",&n[i]);
			soma+=n[i];
		}
		media = soma/a;
		for(i=0;i<a;i++)
			if(n[i]>media)
				c++;
		pct = (c*100.0)/a;
		printf("%.3f%%\n",pct);
	}
	
	return 0;
}