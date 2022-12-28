//2180
#include <stdio.h>
#include <math.h>
#define MAX 10000000

long primo[MAX]={};

void crivo()
{
	int i, j;
	
	for(i=2;i<MAX;i++)
		primo[i]=1;
	
	for(i=2;i*i<=MAX;i++)
		if(primo[i])
			for(j=i+i;j<MAX;j+=i)
				primo[j]=0;
}

int main()
{
	crivo();
	int peso, horas, dias;
	long vel=0, dist = 60000000;
	scanf("%d",&peso);
	int i, j=0;
	for(i=peso;j<10;i++)
	{
		if(primo[i])
		{
			vel+=i;
			j++;
		}
	}
	
	horas = dist/vel;
	dias = horas/24;
	
	printf("%ld km/h\n%d h / %d d\n",vel,horas,dias);
	
	return 0;
}
