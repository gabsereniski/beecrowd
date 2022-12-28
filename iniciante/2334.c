//2334
#include <stdio.h>
int main()
{
	long double p;
	while(scanf("%Lf",&p)&&p>-1)
		printf("%.0Lf\n",!p?p:p-1);
	
	return 0;
}