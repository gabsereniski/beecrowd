//1149
#include <stdio.h>
int main()
{
	int a, n, s=0, i;
	scanf("%d",&a);
	scanf("%d",&n);
	while(n<=0)
		scanf("%d",&n);

	for(i=a;i<a+n;i++)
		s+=i;
	printf("%d\n",s);
	
	return 0;
}