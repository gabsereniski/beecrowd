//1031
#include <stdio.h>

int remaining(int cities, int jump)
{
	int r = 0;
	
	int i;
	for(i = 1; i < cities; i++)
		r = (r + jump) % i;
	
	return r;
}

int main()
{
	int ncities;
	
	while(scanf("%d",&ncities) && ncities)
	{
		int safe, jump;
		
		int i;
		for(i = 1; ; i++)
		{
			safe = remaining(ncities, i);
			
			if(safe == 11)
			{
				jump = i;
				break;
			}
		}
		
		printf("%d\n",jump);
	}
}
