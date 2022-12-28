//1253
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		char s[51];
		
		scanf("%s", s);
		getchar();
		
		int i, d, len = strlen(s);
		
		scanf("%d", &d);
		
		for(i = 0; i < len; i++)
		{
			int c = s[i] - 'A';
			c -= d;
			
			if(c <= 0) c += 26;
			
			c = c % 26;
			
			printf("%c", c + 'A');
		}
		
		puts("");
	}
	
	return 0;
}
