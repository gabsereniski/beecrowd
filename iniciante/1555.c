//1555.c
#include <stdio.h>
#include <math.h>
int main()
{
	int e, x, y, f1, f2, f3;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d%d",&x,&y);
		f1=pow(3*x,2)+pow(y,2);
		f2=2*pow(x,2)+pow(5*y,2);
		f3=-100*x+pow(y,3);
		
		if(f1>f2&&f1>f3)
			printf("Rafael ");
		else if(f2>f1&&f2>f3)
			printf("Beto ");
		else 
			printf("Carlos ");
		printf("ganhou\n");
	}
	
	return 0;
}