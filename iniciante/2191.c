#include <stdio.h>

#define MAX 10000

int i,j,n,x,y,v[MAX],ini=-1,fim=-1,maiors,test=0;

#define max(a,b) (a > b ? a : b)

int msc(int *v, int n)
{
    int maior = 0, atual = 0, i;

    for(i = 0; i < n; i++)
    {
        atual += v[i];

        atual = max(atual, 0);
        maior = max(maior, atual);
    }

    return maior;
}

	
void intervalo(int *v, int n)
{
    int maior = 0, atual = 0, i, ini_atual = 0;

    for(i = 0; i < n; i++)
    {
        atual += v[i];

        if(atual < 0)
        {
            atual = 0;
            ini_atual = i+1;
        }
        if(atual >= maior)
        {
            maior = atual;
            ini = ini_atual;
            fim = i;
        }
    } 
}

int main()
{
	while(scanf("%d",&n) && n)
	{
		for(i=0;i<n;i++)
			{
				scanf("%d %d",&x,&y);
				v[i]=x-y;
			}	
		
		intervalo(v,n);
		
		
		printf("Teste %d\n",++test);
		if(msc(v,n)==0)
		{
			printf("nenhum\n\n");
		}
		else
		{
			printf("%d %d\n\n",ini+1,fim+1);
		}
	
	}
	return 0;
}