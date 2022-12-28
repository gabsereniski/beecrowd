//1557.
#include <stdio.h>
#define max 15
int main()
{
	int i, j, k, l, m[max][max], n, maior, c=0;
	m[0][0]=1;
	for(j=1;j<max;j++)
		m[0][j]=m[0][j-1]*2;
		
	for(i=1,k=1;i<max;i++,k*=2)
		for(j=0,l=2;j<max;j++,l*=2)
			m[i][j]=l*k;
			
	while(scanf("%d",&n)&&n)
	{
		maior=m[n-1][n-1];
		c=0;
		while(maior>0)
		{
			maior/=10;
			c++;
		}
		
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(j<n-1) printf("%*d ",c,m[i][j]);
				else printf("%*d\n",c,m[i][j]);
		printf("\n");
	}
	return 0;
}