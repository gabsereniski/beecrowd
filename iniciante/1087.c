//1087
#include <stdio.h>
int main()
{
	int x1, Y1, x2, y2, d1, d2;
	while (scanf("%d%d%d%d",&x1,&Y1,&x2,&y2)&& x1 && Y1 && x2 && y2)
	{
		d1 = x1-x2;
		if(d1<0)
			d1*=-1;
		d2 = Y1-y2;
		if(d2<0)
			d2*=-1;
			
		if(x1==x2 && Y1==y2)
			printf("0\n");
			
		else if(d1==d2 || d1==0 || d2==0)
			printf("1\n");
		
		else 
			printf("2\n");
	}
	
	return 0;
}