//1848
#include <stdio.h>
#include <string.h>

int main()
{
	char caw[] = "caw caw\0";
	char act[15];
	int c = 0, sum = 0;
	
	while(1)
	{
		fgets(act, 15, stdin);
		act[(strlen(act) - 1)] = '\0';
		
		if(!strcmp(act, caw))
		{
			printf("%d\n",sum);
			sum = 0;
			c++;
			if(c == 3)
				break;
		}
		
		else
		{
			if(act[0] == '*')
				sum += 4;
			if(act[1] == '*')
				sum += 2;
			if(act[2] == '*')
				sum += 1;
		}
	}
	
	return 0;
}