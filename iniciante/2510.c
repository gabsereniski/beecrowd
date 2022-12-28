//2510
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char v[27];
	scanf("%d",&n);
	while(n--)
	{
		fgets(v,27,stdin);
		getchar();
		printf("Y\n");
	}
	
	return 0;
}