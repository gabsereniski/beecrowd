//1039
#include <stdio.h>
#include <math.h>
int x1, x2, Y1, y2, r1, r2;
float dist, d;
float dpr(int x1, int Y1, int x2, int y2)
{
	dist = sqrt( pow((x2-x1),2) + pow((y2-Y1),2) );
	return dist;
}

int main()
{
	while(scanf("%d%d%d%d%d%d",&r1,&x1,&Y1,&r2,&x2,&y2)!=EOF)
	{
		d = dpr(x1,Y1,x2,y2);
		if(r1>=d+r2)
			printf("RICO\n");
		else
			printf("MORTO\n");
	}
	return 0;
}