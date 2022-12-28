//2516.c
#include <stdio.h>
int main()
{
	int d, mv, va;
	float t;
	while(scanf("%d%d%d",&d,&mv,&va)!=EOF)
	{
		if(mv<va) printf("impossivel\n");
		else
		{
			t = (float)d/(mv-va);
			printf("%.2f\n",t);
		}
	}
	
	return 0;
}