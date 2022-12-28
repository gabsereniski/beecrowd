//2486
#include <stdio.h>
#include <string.h>
int main()
{
	int n, q, mg=0;
	char c[20];
	while(scanf("%d",&n)&&n)
	{
		while(n--)
		{
			scanf("%d ",&q);
			fgets(c,20,stdin);
			c[strlen(c)-1]='\0';
			if(strcmp(c,"suco de laranja")==0)
				mg+=120*q;
			else if(strcmp(c,"morango fresco")==0)
				mg+=85*q;
			else if(strcmp(c,"mamao")==0)
				mg+=85*q;
			else if(strcmp(c,"goiaba vermelha")==0)
				mg+=70*q;
			else if(strcmp(c,"manga")==0)
				mg+=56*q;
			else if(strcmp(c,"laranja")==0)
				mg+=50*q;
			else if(strcmp(c,"brocolis")==0)
				mg+=34*q;
		}
		if(mg<110)
			printf("Mais %d mg\n",110-mg);
		else if(mg>130)
			printf("Menos %d mg\n",mg-130);
		else printf("%d mg\n",mg);
		mg=0;
	}
	
	return 0;
}