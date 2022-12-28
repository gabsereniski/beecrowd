#include <stdio.h>

#define MAX 10000

#define max(a,b) (a > b ? a : b)

int maior = 0, atual = 0, i, ini_atual = 0, ini = -1, fim = -1;

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

int main()
{
	int n, maior;
	scanf("%d",&n);
	int i, v[n];
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
	maior = msc(v,n);
	printf("%d\n",maior);
	
	return 0;
}