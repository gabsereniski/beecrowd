//1136
#include <stdio.h>

int abs(int x)
{
	if(x >= 0)
		return x;
	return -x;
}

int main()
{
	int n, b;
	
	while(scanf("%d%d",&n,&b) && n && b)
	{
		int bolas[91] = {};
		int poss[91] = {};
		int i, j, a;
		int c = 0;
		
		for(i = 0; i < b; i++)
			scanf("%d",&bolas[i]);
		
		for(i = 0; i < b; i++)
		{
			for(j = 0; j < b; j++)
			{
				a = abs(bolas[i] - bolas[j]);
				if(a <= n && !poss[a])
					poss[a] = 1;
			}
		}
		
		for(i = 1; i <= n; i++)
			c += poss[i];
		
		printf("%c\n", (c == n) ? 'Y' : 'N');
	}
	
	return 0;
}
