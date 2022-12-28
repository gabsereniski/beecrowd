//2543
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char id[5];
	while(scanf("%d %s",&n,id)!=EOF)
	{
		getchar();
		int c=0;
		while(n--)
		{
			char ij[5], j;
			scanf("%s %c",ij,&j);
			if(strcmp(ij,id)==0)
				if(j=='0')
					c++;
		}
		printf("%d\n",c);
	}
	return 0;
}
