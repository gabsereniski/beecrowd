//2518
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int h, c, l;
	double hip, area;
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d%d%d",&h,&c,&l);
		hip = sqrt(pow(h,2)+pow(c,2));
		area = (l*hip*n)/10000.0;
		printf("%.4lf\n",area);
	}
	
	return 0;
}
