//2251

#include <stdio.h>
#include <math.h>
int main()
{
	int n, t = 0;
	
	while(scanf("%d",&n),n)
		printf("Teste %d\n%d\n\n",++t,(int)pow(2,n)-1);
	
	return 0;
}