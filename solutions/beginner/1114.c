//1114.c
#include <stdio.h>
int main()
{
	int P;
	scanf("%d",&P);
	while(P!=2002) 
	{
		printf("Senha Invalida\n");
		scanf("%d",&P);
	}
	printf("Acesso Permitido\n");
	
	return 0;
}
