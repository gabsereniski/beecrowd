//2222
#include <stdio.h>

int main()
{
	int t;
	int i, j;	
	
	scanf("%d", &t);
	
	while(t--)
	{
		
		int conjuntos[10002][62] = {{},{}};

		int n;
		
		scanf("%d", &n);
		
		for(i = 0; i < n; i++)
		{
			int m;
			
			scanf("%d", &m);
			
			for(j = 0; j < m; j++)
			{
				int f;
				scanf("%d", &f);
				conjuntos[i][f-1] = 1;
			}
		}
		
		int q;
		
		scanf("%d", &q);
		
		while(q--)
		{
			int op, c1, c2;
			
			scanf("%d%d%d", &op, &c1, &c2);
			
			op -= 1, c1 -= 1, c2 -= 1;
			
			int cint = 0, cun = 0;
			
			for(j = 0; j < 60; j++)
			{
				if(conjuntos[c1][j] && conjuntos[c2][j])
					cint++;
				if(conjuntos[c1][j] || conjuntos[c2][j])
					cun++;
			}
			
			if(op) printf("%d\n", cun);
			else   printf("%d\n", cint);
		}
	}
	
	return 0;
}