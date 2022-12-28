//1105
#include <stdio.h>

int check(int deb[], int ndeb)
{
	int i;
	for(i = 0; i < ndeb; i++)
		if(deb[i] < 0)
			return 0;
	
	return 1;
}
	
int main()
{
	int bancos, ndeb;
	
	while(scanf("%d%d",&bancos,&ndeb) && bancos && ndeb)
	{
		int reservas[22], i;
		
		for(i = 0; i < bancos; i++)
			scanf("%d",&reservas[i]);
		
		while(ndeb--)
		{
			int devedor, credor, valor;
			
			scanf("%d%d%d",&devedor,&credor,&valor);
			
			reservas[devedor-1] -= valor;
			reservas[credor-1] += valor;
		}
		
		int possivel = check(reservas, bancos);
		
		if(possivel)
			printf("S\n");
		else
			printf("N\n");
	}
	
	return 0;
}