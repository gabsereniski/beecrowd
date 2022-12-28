//1239
#include <stdio.h>
#include <string.h>

int main()
{
	char s[52];
	
	while(scanf("%[^\n]s", s) != EOF)
	{
		getchar();
		
		int i = 0, b = 0, j, len = strlen(s);
		
		for(j = 0; j < len; j++)
		{
			if(s[j] == '_' && !i)
			{
				printf("<i>");
				i = 1;
			}
			
			else if(s[j] == '_' && i)
			{
				printf("</i>");
				i = 0;
			}
			
			else if(s[j] == '*'&& !b)
			{
				printf("<b>");
				b = 1;
			}
			
			else if(s[j] == '*' && b)
			{
				printf("</b>");
				b = 0;
			}
			
			else printf("%c", s[j]);
		}
		
		printf("\n");
	}
	
	return 0;
}