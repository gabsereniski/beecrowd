//1589
#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d",&n);
	while(n)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",a+b);
		n--;
	}
	
	return 0;
}