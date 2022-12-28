//1865.c
#include <stdio.h>
#include <string.h>
int main()
{
	int e, n;
	char p[10];
	scanf("%d",&e);
	while(e)
	{
		scanf("%s %d",p,&n);
		if(strcmp("Thor",p)==0)
			printf("Y\n");
		else printf("N\n");
		e--;
	}
	return 0;
}