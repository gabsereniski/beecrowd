//2231
#include <stdio.h>
#include <limits.h>
#define MAX 10000
int main()
{
	int v[MAX], n, m, c=0, media, i, j, k;
	
	while(scanf("%d%d",&n,&m)&&n&&m)
	{
		int menor = INT_MAX, soma = 0, maior = INT_MIN;
		
		k = m;
		
		for(i = 0; i < n; i++)
		{
			scanf("%d",&v[i]);
			
			soma+=v[i];
			
			if(i==k-1)
			{
				media = soma/m;
				
				if(media>maior)
					maior = media;
				
				if(media<menor)
					menor = media;
					
				soma-=v[i-(m-1)];
				k++;
			}		
		}
		
		printf("Teste %d\n",++c);
		printf("%d %d\n\n",menor, maior);
	}
	
	return 0;
}