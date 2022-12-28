//1158
#include <stdio.h>
int main()
{
	int e, x, y, i, c, s=0;
	scanf("%d",&e);
	for(c=0;c<e;c++)
	{
		scanf("%d%d",&x,&y);
		if(x%2==0) x+=1;
		for(i=x;i<x+(2*y);i+=2)
			s+=i;
		printf("%d\n",s);
		s=0;
	}
	
	return 0;
}