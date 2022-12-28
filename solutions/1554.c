//1554
#include <stdio.h>
#include <math.h>

double dist(int bbx, int bby, int x, int y)
{
	double d;
	d = sqrt(pow((x-bbx),2)+pow((y-bby),2));
	return d;
}

int main()
{
	int e, n, bbx, bby, x, y;
	double d;
	scanf("%d",&e);
	while(e--)
	{
		int i=0, g, menor=100000;
		scanf("%d",&n);
		scanf("%d%d",&bbx,&bby);
		while(n--)
		{
			i++;
			scanf("%d%d",&x,&y);
			d = dist(bbx,bby,x,y);
			if(d<menor)
			{
				menor = d;
				g = i;
			}
		}
		printf("%d\n",g);
	}
	
	return 0;
}