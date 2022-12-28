//1180
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	
	int x[n], menor, i, mp, v;
	
	x[0]=0;
	
	scanf("%d",&v);
	x[0] = v;
	menor = v;
	
	for(i=1;i<n;i++)
	{
		scanf("%d",&v);
		x[i] = v;
	}
	for(i=0;i<n;i++)
	{
		if(x[i]<=menor)
		{
			menor = x[i];
			mp = i;
		}
	}
	
	printf("Menor valor: %d\nPosicao: %d\n",menor,mp);
	
	return 0;
}