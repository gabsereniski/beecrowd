//2176
#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char s[101], soma=0;
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
		soma+=s[i];
	if(soma%2)
		printf("%s1\n",s);
	else printf("%s0\n",s);
	
	return 0;
}