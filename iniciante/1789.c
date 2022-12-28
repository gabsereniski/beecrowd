//1789.c
#include <stdio.h>
int main()
{
	int n, sl, maior=0, i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&sl);
			if(sl>maior)
				maior=sl;
		}
		
		if(maior<10) printf("1\n");
		else if(maior>=20) printf("3\n");
		else printf("2\n");
		maior=0;
	}
	
	return 0;
}