//1104
#include <stdio.h>

int min(int a, int b)
{
	if(a <= b) return a;
	
	return b;
}

int main()
{
	int na, nb;
	
	while(scanf("%d%d",&na,&nb) && na && nb)
	{
		int a[100001] = {}, b[100001] = {};
		int ra = 0, rb = 0;
		int c;
		
		while(na--)
		{
			scanf("%d",&c);
			
			if(!a[c])
			{
				a[c] = 1;
				ra++;
			}
		}	
		while(nb--)
		{
			scanf("%d",&c);
			
			if(!b[c]) 
			{
				b[c] = 1;
				rb++;
				
				if(a[c] && b[c])
					ra--, rb--;
			}
		}
		
		printf("%d\n",min(ra,rb));
	}
	
	return 0;
}