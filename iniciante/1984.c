//1984.c
#include <stdio.h>
#include <string.h>
int main()
{
	char n[25];
	int i, len;
	scanf("%s",n);
	len = strlen(n);
	for(i=len-1;i>=0;i--)
		printf("%c",n[i]);
	printf("\n");
	
	return 0;
}