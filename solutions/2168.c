//2168
#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d",&n);
	int m[n+1][n+1];
	char v[n][n];
	for(i=0;i<n+1;i++)
		for(j=0;j<n+1;j++)
			scanf("%d",&m[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(m[i][j]+m[i][j+1]+m[i+1][j]+m[i+1][j+1]<2)
				v[i][j]='U';
			else v[i][j]='S';
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("%c",v[i][j]);
			if(j==n-1) printf("\n");
		}
	
	return 0;
}