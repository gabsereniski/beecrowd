//1155
#include <stdio.h>
int main()
{
	float s=0.0, i;
	for(i=1;i<=100;i++)
		s+=(1/i);
	printf("%.2f\n",s);
	
	return 0;
}