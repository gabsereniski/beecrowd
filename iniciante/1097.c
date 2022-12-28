//1097.c
#include <stdio.h>
int main()
{
	int i, j, k=0;
	for(i=1;i<=9;i+=2)
	{
		k+=2;
		for(j=5;j>=3;j--)
			printf("I=%d J=%d\n",i,j+k);
	}
	
	return 0;
}