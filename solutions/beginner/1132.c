//1132.c
#include <stdio.h>
int main()
{
	int X, Y, i, s=0;
	scanf("%d%d", &X, &Y);
	if(X<Y)
	{
		for(i=X;i<=Y;i++)
		{
			if(i%13!=0) s+=i;
		}
	}
	else
	{
		for(i=Y;i<=X;i++)
		{
			if(i%13!=0) s+=i;
		}
	}
	printf("%d\n", s);
	
	return 0;
}
