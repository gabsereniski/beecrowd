//1153
#include <stdio.h>
int main()
{
	int n, f=1, i;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
		f*=i;
	printf("%d\n",f);
	
	return 0;
}
