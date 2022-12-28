//1548
#include <stdio.h>
void sort(int v[], int len)
{
	int i, j, tmp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if(v[j]<v[j+1])
			{
				tmp=v[j];
				v[j]=v[j+1];
				v[j+1]=tmp;
			}
}
int main()
{
	int e, n;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d",&n);
		int i, v[1000]={}, v2[1000]={}, cont=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&v[i]);
			v2[i]=v[i];
		}
		sort(v,n);
		for(i=0;i<n;i++)
			if(v[i]==v2[i])
				cont++;
		printf("%d\n",cont);
	}
	return 0;
}