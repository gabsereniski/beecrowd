//1157
#include <stdio.h>
int main()
{
	int n, d=0;
	scanf("%d",&n);
	for(d=1;d<=n;d++)
		if(n%d==0) 
			printf("%d\n",d);
			
	return 0;
}