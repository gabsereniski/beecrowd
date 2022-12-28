#include <string.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

typedef struct
{
    char nome[16];
    int nota;
}cara;

void swap(cara *n1,cara *n2)
{
    cara temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;    
}
void bubbleStr(cara v[], int n)
{
    int i, j;
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n-1 ; j++)
        {
            if(strcmp(v[j].nome, v[j+1].nome) > 0)
                swap(&v[j],&v[j+1]);
        }
}

void bubbleNota(cara v[], int n)
{
    int i, j;
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n-1 ; j++)
        {
            if(v[j].nota < v[j+1].nota)
                swap(&v[j],&v[j+1]);
        }
}

int main()
{
    int n, teste = 0;
    while(scanf("%d",&n),n)
    {
        int i;
        cara v[1001];
        for(i = 0 ; i < n ; i++)
        {
            scanf("%s",v[i].nome);
            int menor = INT_MAX, maior = INT_MIN, soma = 0, grd;
            int j;
            for(j = 0 ; j < 12 ; j++)
            {
                scanf("%d",&grd);
                soma+=grd;
                if(grd > maior)
                    maior = grd;
                if(grd < menor)
                    menor = grd;
            }
            
            v[i].nota = soma - (menor + maior);
        }
        
        bubbleStr(v, n);
        bubbleNota(v, n);
        
        printf("Teste %d\n",++teste);
        int k = 1;
        
        printf("%d %d %s\n", k, v[0].nota, v[0].nome);
        
        for(i=1;i<n;i++)
        {
            if(v[i].nota == v[i-1].nota)
                printf("%d ",k);
            else
            {
                printf("%d ",i+1);
                k = i+1;
            }
            printf("%d %s\n", v[i].nota, v[i].nome);
        }
        
        printf("\n");
    }
    
    return 0;
}