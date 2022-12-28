//1151.c
#include <stdio.h>
int main()
{
	int n, f[46], i;
	scanf("%d",&n);
	f[0]=0; f[1]=1;
	for(i=2;i<n;i++)
		f[i]=f[i-1]+f[i-2];
	for(i=0;i<n;i++)
	{
		if(i<n-1) printf("%d ",f[i]);
		else printf("%d\n",f[i]);
	}
	
	return 0;
}