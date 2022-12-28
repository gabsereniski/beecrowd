//1255
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	getchar();
	
	while(n--)
	{
		char str[201];
		
		int m = INT_MIN;
		
		int alf[26] = {};
		
		fgets(str, 201, stdin);
		
		int len = strlen(str);
		
		for(i = 0; i < len; i++)
		{
			str[i] = tolower(str[i]);
			
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				alf[str[i] - 'a']++;
			
				if(alf[str[i] - 'a'] > m)
					m = alf[str[i] - 'a'];
			}
		}
		
		for(i = 0; i < 26; i++)
			if(alf[i] == m) printf("%c", i + 'a');
		
		printf("\n");
	}
	
	return 0;
}