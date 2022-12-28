//1245
#include <stdio.h>

int min(int a, int b)
{
	if(a <= b) return a;
	
	return b;
}

int main()
{
	int b;
	
	while(scanf("%d", &b) != EOF)
	{
		int e[31] = {}, d[31] = {};
		
		while(b--)
		{
			int n;
			char p;
			
			scanf("%d %c", &n, &p);
			
			n -= 30;
			
			if(p == 'E') e[n]++;
			else         d[n]++;
		}
		
		int i, pares = 0;
		
		for(i = 0; i < 31; i++)
			pares += min(e[i], d[i]);
			
		printf("%d\n", pares);
	}
	
	return 0;
}