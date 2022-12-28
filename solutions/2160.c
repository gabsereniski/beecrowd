//2160
#include <stdio.h>
#include <string.h>
int main()
{
	char name[500];
	int len;
	fgets(name,500,stdin);
	len = strlen(name);
	if(len-1>80) printf("NO\n");
	else printf("YES\n");
	
	return 0;
}