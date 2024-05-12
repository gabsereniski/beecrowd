//2165
#include <stdio.h>
#include <string.h>
int main()
{
	char t[500];
	int len;
	fgets(t,500,stdin);
	len = (strlen(t))-1;
	if(len>140) printf("MUTE\n");
	else printf("TWEET\n");
	
	return 0;
}