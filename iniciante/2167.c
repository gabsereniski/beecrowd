//2167
#include <stdio.h>
int main()
{
	int e, i, q=0;
	scanf("%d",&e);
	int n[e];
	for(i=0;i<e;i++)
		scanf("%d",&n[i]);
	for(i=1;i<e;i++)
	{
		if(n[i]<n[i-1])
		{
			q=i+1; break;
		}
	}
	
	printf("%d\n",q);
	
	return 0;
}