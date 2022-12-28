//1131.c
#include <stdio.h>
int main()
{
	int itr, gre, ip=0, gp=0, e=0, ng=0, c;
	c=1;
	while(c==1)
	{
		scanf("%d%d",&itr,&gre);
		if(itr>gre) ip++;
		else if(itr==gre) e++;
		else gp++;
		ng++;
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&c);
		while(c<1||c>2)
		{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d",&c);
		}
	}
	printf("%d grenais\n",ng);
	printf("Inter:%d\n",ip);
	printf("Gremio:%d\n",gp);
	printf("Empates:%d\n",e);
	if(ip>gp) printf("Inter ");
	else printf("Gremio ");
	printf("venceu mais\n");
	
	return 0;
}