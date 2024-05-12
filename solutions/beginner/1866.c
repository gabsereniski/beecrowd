//1866
#include <stdio.h>
int main()
{
	int e, n;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d",&n);
		if(n%2==0) printf("0\n");
		else printf("1\n");
		e--;
	}
	return 0;
}