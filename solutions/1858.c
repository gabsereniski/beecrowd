//1858
#include <stdio.h>
int main()
{
	int a[100], n, i, menor=101, p=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		if(a[i]<menor)
		{
			menor=a[i];
			p=i+1;
		}
	
	printf("%d\n",p);
	
	return 0;
}