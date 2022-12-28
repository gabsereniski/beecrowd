#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {false, true} bool;

#define M 10001

int	m[M];
int n;

bool bem;

int teste(int raiz)
{
	//int	t, q, s;
	int total, peso, atual;
	int	i;		
	
	peso = -1;
	total =1;
	
	for(i = 1; i <= n; i++)
	{
		if(m[i] != raiz)
			continue;
		
		atual = teste(i);
		
		total += atual;
		
		if(peso == -1)
		{
			peso = atual;
			continue;
		}
	
		if(atual != peso)
			bem = false;		
	}
	
	return total;
}



int main ()
{	
	scanf("%d", &n);
	
	int	i, u, v;
	
	for(i = 0; i < n; i++)
	{
		scanf("%d%d", &u, &v);
		m[u] = v;
	}	
	
	bem = true;
	
	teste(0);
	
	printf("%s\n", bem ? "bem" : "mal");
	
	return 0;
}