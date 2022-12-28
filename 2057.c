//2057
#include <stdio.h>
int main()
{
	int a, b, c, h;
	scanf("%d%d%d",&a,&b,&c);
	h=a+b+c;
	if(h>=0&&h<24)
		printf("%d\n",h);
	else if(h<0)
	{
		h*=-1;
		printf("%d\n",24-h);
	}
	else if(h>24)
		printf("%d\n",h-24);	
	
	return 0;
}
