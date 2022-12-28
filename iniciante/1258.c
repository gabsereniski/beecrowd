//1258
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[1000];
	char cor[30];
	int tam;
} aluno;

int compare(const void *a, const void *b)
{
	aluno x = *(aluno*)a;
	aluno y = *(aluno*)b;
	
	if(strcmp(x.cor, y.cor) < 0)   return -1;
	if(strcmp(x.cor, y.cor) > 0)   return  1;
	if(x.tam < y.tam)              return -1;
	if(x.tam > y.tam)              return  1;
	if(strcmp(x.nome, y.nome) < 0) return -1;
	if(strcmp(x.nome, y.nome) > 0) return  1;
	
	return 0;
}

int main()
{
	int n, printed = 0;
	
	while(scanf("%d", &n))
	{
		if(n != 0 && printed)
			puts("");
		
	
		if(n != 0 && !printed)
			printed = 1;
	
		if(!n) break;
		
		getchar();
		
		aluno a[n];
		int i;
		
		for(i = 0; i < n; i++)
		{
			fgets(a[i].nome, 1000, stdin);
			
			a[i].nome[strlen(a[i].nome) - 1] = '\0';
			
			char t;
		
			scanf("%s", a[i].cor), getchar();
			t = getchar();
			getchar();
			
			if(t == 'P')      a[i].tam = 1;
			else if(t == 'M') a[i].tam = 2;
			else              a[i].tam = 3;
		}
		
		qsort(a, n, sizeof(aluno), compare);
		
		for(i = 0; i < n; i++)
		{
			printf("%s ", a[i].cor);
			char t;
			
			if(a[i].tam == 1)      t = 'P';
			else if(a[i].tam == 2) t = 'M';
			else                   t = 'G';
			
			printf("%c ", t);
			
			printf("%s\n", a[i].nome);
		}
	}
	
	return 0;
}