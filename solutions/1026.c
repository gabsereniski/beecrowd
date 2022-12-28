//1026
#include <stdio.h>
int main()
{
	unsigned a, b, r;
	while(scanf("%u%u",&a,&b)!=EOF)
	{
		r = a^b;
		printf("%u\n",r);
	}
	
	return 0;
}