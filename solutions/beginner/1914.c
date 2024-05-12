//1914.c
#include <stdio.h>
#include <string.h>
int main()
{
	int e, n1, n2, s;
	char nome1[100], nome2[100], j1[10], j2[10];
	scanf("%d",&e);
	while(e)
	{
		scanf("%s %s",nome1,j1);
		scanf("%s %s",nome2,j2);		
		scanf("%d%d",&n1,&n2);
		s=n1+n2;
		
		if(s%2==0)
			if(strcmp(j1,"PAR")==0) printf("%s\n",nome1);
			else printf("%s\n",nome2);
		else
			if(strcmp(j1,"IMPAR")==0) printf("%s\n",nome1);
			else printf("%s\n",nome2);
		e--;
	}
	
	return 0;
}