//1170
#include <stdio.h>
#include <math.h>
int main()
{
	int i, e, c=0;
	float n;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%f",&n);
		while(n>1)
		{
			n/=2;
			c++;
		}
		printf("%d dias\n",c);
		c=0;
	}
	
	return 0;
}
