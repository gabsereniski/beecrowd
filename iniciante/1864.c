// 1864 life is not a problem to be solved
#include <stdio.h>
#include <string.h>
int main()
{
	char str[]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
	int i, n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%c",str[i]);
	printf("\n");
	
	return 0;
}