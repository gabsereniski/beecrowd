//2534
#include <stdio.h>

void sort(int v[], int n)
{
	int k, j, aux;
	for(k=1;k<n;k++)
		for(j=0;j<n-1;j++)
			if(v[j]<=v[j+1])
			{
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
}

int main()
{
	int n, q;
	while(scanf("%d%d",&n,&q)!=EOF)
	{
		int v[30001] = {}, p, i;
		for(i=0;i<n;i++)
			scanf("%d",&v[i]);
		sort(v,n);
		while(q--)
		{
			scanf("%d",&p);
			printf("%d\n",v[p-1]);
		}
	}
	return 0;
}