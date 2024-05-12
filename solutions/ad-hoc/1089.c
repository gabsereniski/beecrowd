//1089
#include <stdio.h>

int main()
{
	int p;
	
	while(scanf("%d",&p),p)
	{
		int wave[10002] = {};
		int i, peak = 0;
		
		for(i = 0; i < p; i++)
			scanf("%d",&wave[i]);
		
		for(i = 0; i < p; i++)
		{
			if(wave[i] < wave[(i + 1) % p])
				if(wave[(i + 1) % p] > wave[(i + 2) %p])
					peak++;
			
			if(wave[i] > wave[(i + 1) % p])
				if(wave[(i + 1) % p] < wave[(i + 2) %p])
					peak++;
		}
		
		printf("%d\n", peak);
	}
	
	return 0;
}