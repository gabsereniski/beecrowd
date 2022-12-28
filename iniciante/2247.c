//2247
#include <stdio.h>

int main()
{
	int n, a, b, t = 0;
	
	while(scanf("%d",&n),n)
	{
		int r[105] = {}, i, aux;
		
		scanf("%d%d",&a,&b);
		
		r[0] = a-b;
		
		for(i=1;i<n;i++)
		{
			scanf("%d%d",&a,&b);
			aux = a-b;
			r[i] = aux + r[i-1];
		}
		
		printf("Teste %d\n",++t);
		
		for(i=0;i<n;i++)
			printf("%d\n",r[i]);
		
		printf("\n");
		
	}
	
	return 0;
}
