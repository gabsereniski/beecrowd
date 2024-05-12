//1436/
#include <stdio.h>
int main()
{
	int e, n, id[10], i, c, j=0;
	scanf("%d",&e);
	while(e--)
	{
		j++;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			scanf("%d",&id[i]);
		c=id[i/2];
		
		printf("Case %d: %d\n",j,c);
	}
	
	return 0;
}