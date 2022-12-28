//2006
#include <stdio.h>
int main()
{
	int c, p[5], i, n=0;
	scanf("%d",&c);
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
		if(p[i]==c)
			n++;
	}
	
	printf("%d\n",n);

	return 0;
}