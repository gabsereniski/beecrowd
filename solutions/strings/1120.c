//1120
#include <stdio.h>
#include <string.h>

int main()
{
	while(1)
	{
		int i, len, printed = 0;
		char d, n[101];
		scanf("%c",&d);
		scanf("%s", n);
		getchar();
		
		if(d == '0' && d == n[0])
			break;
		
		len = strlen(n);
		
		for(i = 0; i < len; i++)
		{
			if(n[i] != d)
			{
				if(!printed && n[i] != '0')
				{
					printed = 1;
					printf("%c", n[i]);
				}
				else if(printed)
					printf("%c", n[i]);
			}
		}
		
		if(!printed)
			printf("0");
			
		printf("\n");
	}
	
	return 0;
}