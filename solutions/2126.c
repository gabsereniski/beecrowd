//2126
#include <stdio.h>
#include <string.h>

int main()
{
	int caso=0;
	char base[13] = {};
	while(scanf("%s",base) != EOF)
	{
		getchar();
		char txt[34] = {}, aux[13] = {}, cont=0;
		
		scanf("%s",txt);
		getchar();
						
		int i, j, k, pos;
		for(i=0;i<strlen(txt);i++)
		{
			if(txt[i] == base[0])
			{
				for(j=i,k=0;k<strlen(base);k++,j++)
					aux[k] = txt[j];
					
				if(strcmp(aux,base)==0)
				{
					cont++;
					pos = i+1;
				}
			}
		}
		
		printf("Caso #%d:\n",++caso);
		if(cont)
		{
			printf("Qtd.Subsequencias: %d\n",cont);
			printf("Pos: %d\n\n",pos);
		}
		else
			printf("Nao existe subsequencia\n\n");
	}
	
	return 0;
}