//1030
#include <stdio.h>

int jose(int n, int k)
{
	if(n==1)
		return 1;
	return (jose(n-1,k)+k-1)%n+1;
}

int main()
{
	int e, n, s, c=0, safe;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d%d",&n,&s);
		safe = jose(n,s);
		printf("Case %d: %d\n",++c,safe);
	}
	
	return 0;
}