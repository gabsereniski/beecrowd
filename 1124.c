//1124
#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
	if(a >= b)
		return a;
	return b;
}

int min(int a, int b)
{
	if(a <= b)
		return a;
	return b;
}

int fits(double L, double C, double R1, double R2)
{
	double dx = L - R1 - R2;
	double dy = C - R1 - R2;
	
	if(dx < 0 || dy < 0)
		return 0;
	
	if(dx*dx + dy*dy >= (R1 + R2)*(R1 + R2) && 
	   min(L, C) >= 2*max(R1, R2)) return 1; 
	
	return 0;
}

int main()
{
	double L, C, R1, R2;
	while(scanf("%lf%lf%lf%lf",&L,&C,&R1,&R2) && (L + C + R1 + R2) > 0)
		printf("%c\n",fits(L, C, R1, R2) ? 'S' : 'N');
	
	return 0;
}