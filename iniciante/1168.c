//1168
#include <stdio.h>
#include <string.h>
int main()
{
	int soma=0, e, i;
	char str[100];
	scanf("%d",&e);
	while(e--)
	{
		scanf("%s",str);
		for(i=0;i<strlen(str);i++)
		{
			switch(str[i])
			{
				case '1': soma+=2; break;
				case '2': soma+=5; break;
				case '3': soma+=5; break;
				case '4': soma+=4; break;
				case '5': soma+=5; break;
				case '6': soma+=6; break;
				case '7': soma+=3; break;
				case '8': soma+=7; break;
				case '9': soma+=6; break;
				case '0': soma+=6; break;
			}
		}
		printf("%d leds\n",soma);
		soma=0;
	}
	
	return 0;
}