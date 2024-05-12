//2523
#include <stdio.h>
#include <string.h>
int main()
{
	char a[27];
	int n, c;
	while(scanf("%s",a)!=EOF)
	{
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&c);
			printf("%c",a[c-1]);
		}
		printf("\n");
	}
	
	return 0;
}
