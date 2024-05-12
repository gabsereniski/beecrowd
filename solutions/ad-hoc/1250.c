//1250
#include <stdio.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		int i, t, tiro[51], at = 0;
		char m;
		
		scanf("%d", &t);
		
		for(i = 0; i < t; i++)
			scanf("%d", &tiro[i]);
			
		getchar();
		
		for(i = 0; i < t; i++)
		{
			m = getchar();
			
			if     (m == 'J' && tiro[i] > 2) at++;
			else if(m == 'S' && tiro[i] < 3) at++;
		}
		
		getchar();
		
		printf("%d\n", at);
	}
	
	return 0;
}
