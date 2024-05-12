//1620
#include <stdio.h>
int main()
{
	long double x, l;
	while(scanf("%Lf",&l)&&l)
	{
		x = (l-3.0)/l;
		printf("%Lf\n",x);
	}
	
	return 0;
}