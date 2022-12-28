//1150
#include <stdio.h>
int main()
{
	int x, z, i, s, j=1;
	scanf("%d",&x);
	s=x;
	scanf("%d",&z);
	while(z<=x) scanf("%d",&z);
	
	for(i=x;s<z;i++)
	{
		s+=i;
		j++;
	}
	if(x<=0) printf("%d\n",j-1);
	else printf("%d\n",j);
	
	return 0;
}