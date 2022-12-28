//1534
#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int m[n][n], i, j, k;
		for(i=0,k=n-1;i<n;i++,k--)
			for(j=0;j<n;j++)
			{
				if(i==j&&j!=k) printf("1");
				else if(j==k) printf("2");
				else printf("3");
				if(j==n-1) printf("\n");
			}
	}
	
	return 0;
}