#include <stdio.h>

int main()
{
	int X, Y, i, s=0;
	scanf ("%d%d",&X,&Y);
	if (X<Y)
	{
		for (i=X+1;i<Y;i++) 
		if (i%2!=0) s+=i;
	}
	
	else
	{
		for(i=Y+1;i<X;i++) 
		if (i%2!=0) s+=i;
	}
		
	printf("%d\n", s);

	return 0;
}
