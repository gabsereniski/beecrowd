//2203
#include <stdio.h>
#include <math.h>

int main()
{
	double x1, y1, x2, y2, v, r1, r2, X, Y, d, r;
	
	while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
	{
		scanf("%lf%lf%lf", &v, &r1, &r2);
		
		X = x2 - x1;
		X *= X;
		Y = y2 - y1;
		Y *= Y;
		
		d = sqrt(X + Y);
		d += v * 1.5;
		
		r = r1 + r2;
		
		printf( d > r ? "N\n" : "Y\n");
	}
	
	return 0;
} 