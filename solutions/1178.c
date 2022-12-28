//1178.c
#include <stdio.h>
#define max 100
int main()
{
	double e, n[max];
	int i;
	scanf("%lf",&e);
	n[0]=e;
	for(i=1;i<max;i++)
		n[i]=n[i-1]/2.0;
	for(i=0;i<max;i++)
		printf("N[%d] = %.4lf\n",i,n[i]);
	
	return 0;
}