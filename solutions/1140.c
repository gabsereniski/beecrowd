//1140
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
	while(1)
	{
		char phrase[1200] = {}, flag = 1;
		int i;
		fgets(phrase, 1200, stdin);
		if(phrase[0] == '*')
			break;
		
		for(i = 0 ; i < strlen(phrase)-1 ; i++)
		{
			if((phrase[i]==' ') && (tolower(phrase[i+1])!=tolower(phrase[0])))
			{
				flag = 0;
				break;
			}
		}
		
		if(flag)
			printf("Y\n");
		else
			printf("N\n");
	}
	
	return 0;
}