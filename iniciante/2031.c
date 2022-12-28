//2031
#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	char j1[20], j2[20];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s",j1,j2);
		if(strcmp(j1,"ataque")==0 && strcmp(j2,j1)==0)
			printf("Aniquilacao mutua\n");
		else if(strcmp(j1,"ataque")==0 && strcmp(j2,j1)!=0)
			printf("Jogador 1 venceu\n");
		else if(strcmp(j2,"ataque")==0 && strcmp(j1,j2)!=0)
			printf("Jogador 2 venceu\n");
		else if(strcmp(j1,"pedra")==0 && strcmp(j1,j2)==0)
			printf("Sem ganhador\n");
		else if(strcmp(j1,"pedra")==0 && strcmp(j2,"papel")==0)
			printf("Jogador 1 venceu\n");
		else if(strcmp(j2,"pedra")==0 && strcmp(j1,"papel")==0)
			printf("Jogador 2 venceu\n");
		else if(strcmp(j1,"papel")==0 && strcmp(j1,j2)==0)
			printf("Ambos venceram\n");
	}
	
	return 0;
}