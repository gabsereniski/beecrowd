//2029
#include <stdio.h>
#include <math.h>
int main()
{
	double v, d, h, a, r, ab;
	while(scanf("%lf%lf",&v,&d)!=EOF)
	{
		r=d/2;
		ab=3.14*r*r;
		h=v/ab;
		printf("ALTURA = %.2lf\nAREA = %.2lf\n",h,ab);
	}
	
	return 0;
}