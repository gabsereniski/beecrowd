#include <stdio.h>
#include <string.h>

typedef struct
{
	char v[300];
	int top;
} pilha;

void inicializa(pilha *p)
{
	p->top=0;
}

void insere(pilha *p, char novo)
{
	p->v[p->top]=novo;
	p->top++;
}

void remover(pilha *p)
{
	p->top--;
}

char getTop(pilha *p)
{
	return p->v[p->top-1];
}

int isEmpty(pilha *p)
{
	return !(p->top);
}

char match(char c)
{
	if(c=='C')
		return 'F';
	if(c=='F')
		return 'C';
	if(c=='B')
		return 'S';
	return 'B';
}

int main()
{
	pilha p;
	char c[301];
	int i;
	
	while(scanf("%s",c) != EOF)
	{
		int total=0;
		inicializa(&p);
		for(i=0;i<strlen(c);i++)
		{
			if(isEmpty(&p))
				insere(&p,c[i]);
			else
			{
				if(match(c[i])==getTop(&p))
				{
					total++;
					remover(&p);
				}
				else
				{
					insere(&p,c[i]);
				}
			}	
		}
		printf("%d\n",total);
	}
	return 0;
}