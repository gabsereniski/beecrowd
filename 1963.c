//1963
#include <stdio.h>
int main()
{
	double p, a, b, h;
	scanf("%lf%lf",&a,&b);
	h=b-a;
	p=(100*h)/a;
	printf("%.2lf%%\n",p);
	
	return 0;
}