//1249
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char s[52];
	
	while(scanf("%[^\n]s", s) != EOF)
	{
		getchar();
		
		int len = strlen(s), c, i;
		
		for(i = 0; i < len; i++)
		{
			if(isalpha(s[i]))
			{			
				int lower = islower(s[i]);
			
				if(lower) c = s[i] - 'a';
				else      c = s[i] - 'A';
				
				c = (c + 13) % 26;
				
				printf("%c", lower ? c + 'a' : c + 'A');
			}
			
			else printf("%c", s[i]);
		}
		puts("");
	}
	
	return 0;
}