//1397
#include <stdio.h>
int main()
{
	int e;
	while(scanf("%d",&e)&&e)
	{
		int sa=0, sb=0;
		int a, b;
		while(e--)
		{
			scanf("%d%d",&a,&b);
			if(a>b)
				sa+=1;
			else if(a<b)
				sb+=1;
		}
		printf("%d %d\n",sa,sb);
	}
	
	return 0;
}