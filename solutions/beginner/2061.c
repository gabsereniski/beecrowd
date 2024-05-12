//2061
#include <stdio.h>
#include <string.h>
int main()
{
	int n, a, c;
	char f[10];
	scanf("%d%d",&n,&a);
	c=n;
	while(a--)
	{
		scanf("%s",f);
		if(strcmp("fechou",f)==0) c++;
		else if(strcmp("clicou",f)==0) c--;
	}
	printf("%d\n",c);
	
	return 0;
}