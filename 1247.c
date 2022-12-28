//1247
#include <stdio.h>
#include <math.h>

int main()
{
	int d, vf, vg, l = 12;
	
	while(scanf("%d%d%d", &d, &vf, &vg) != EOF)
	{
		double x, tf, tg;
		
		x = sqrt(l*l + d*d);
		tf = (double)l / vf;
		tg = x / vg;
		
		printf("%c\n", tg > tf ? 'N' : 'S');
	}
	
	return 0;
}