//2164.c
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double pos, neg, fib;
	scanf("%d",&n);
	pos = pow(((1+sqrt(5))/2),n);
	neg = pow(((1-sqrt(5))/2),n);
	fib = (pos-neg)/sqrt(5);
	printf("%.1lf\n",fib);
	
	return 0;
}