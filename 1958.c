//1958
#include <stdio.h>

int main()
{
	long double n;
	char s[120];
	scanf("%LE",&n);
	sprintf(s,"%LE",n);
	if(s[0] != '-') printf("+");
	printf("%.4LE\n",n);
	
	return 0;
}