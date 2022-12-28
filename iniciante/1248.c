//1248
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	getchar();
	
	while(n--)
	{
		char d[90], c[90], a[90];
		int dieta[27] = {}, comeu[27] = {};
		
		fgets(d, 90, stdin); d[strlen(d) - 1] = '\0';
		fgets(c, 90, stdin); c[strlen(c) - 1] = '\0';
		fgets(a, 90, stdin); a[strlen(a) - 1] = '\0';
		
		int i, len = strlen(d), cheater = 0;

		strcat(c, a);
		
		for(i = 0; i < len; i++)
			dieta[d[i] - 'A']++;

		len = strlen(c);
		
		for(i = 0; i < len; i++)
			comeu[c[i] - 'A']++;
		
		for(i = 0; i < 26; i++)
		{
			if(comeu[i] > dieta[i])
			{
				printf("CHEATER\n");
				cheater = 1;
				break;
			}
		}
		
		if(cheater) continue;
		
		for(i = 0; i < 26; i++)
			if(!comeu[i] && dieta[i])
				printf("%c", i + 'A');
		
		puts("");
	}
	
	return 0;
}