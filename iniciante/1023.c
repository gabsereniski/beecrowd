//1023
#include <stdio.h>
#include <math.h>
#define MAXM 1000002

typedef struct
{
    int qtd;
    int average;
} residents;

void swap(residents *a, residents *b)
{
	residents aux;
	
	aux = *a;
	*a = *b;
	*b = aux;
}

int partition(residents v[], int low, int high)
{
	int pivo = v[low].average;
	int i = low-1, j = high+1;
	
	while(1)
	{
		do
		{
			i++;
		} while(v[i].average < pivo);
		
		do
		{
			j--;
		} while(v[j].average > pivo);
		
		if(i >= j)
			return j;
		
		swap(&v[i],&v[j]);
	}
}

void quick(residents v[], int low, int high)
{
	if(low < high)
	{
		int Pt = partition(v,low,high);
		quick(v,low,Pt);
		quick(v,Pt+1,high);
	}
}

int main()
{
	int n, city = 0;
	while(scanf("%d",&n)&&n)
	{
		residents r[MAXM] = {{},{}};
		int i, x, y, totalcons = 0, totalresidents = 0;
		float averagecons;
		
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d %d",&x, &y);
			r[y/x].qtd += x;
			r[y/x].average = y/x;
			totalcons += y;
			totalresidents += x;
		}
		
		averagecons = (float)totalcons/totalresidents;
		averagecons = (floor(100*averagecons))/100.0;
		quick(r,0,n-1);
		
		int max = 0;
		for(i = 0 ; i < MAXM ; i++)
			if(r[i].qtd || r[i].average)
				max++;
		
		printf("Cidade# %d:\n",++city);
		int j = 0;
		for(i = 0 ; i < MAXM ; i++)
		{
			if(r[i].qtd || r[i].average)
			{
				printf("%d-%d",r[i].qtd,r[i].average);
				++j;
				if(j < max)
					printf(" ");
			}
		}
		printf("\n");
		printf("Consumo medio: %.2f m3.\n\n", averagecons);
	}
	
	return 0;
}