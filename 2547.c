//2547
#include <stdio.h>
int main()
{
	int n, max, min;
	while(scanf("%d%d%d",&n,&min,&max)!=EOF)
	{
		int h, c=0;
		while(n--)
		{
			scanf("%d",&h);
			if(h<=max && h>=min)
				c++;
		}
		printf("%d\n",c);
	}
	
	return 0;
}
