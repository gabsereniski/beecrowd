//1025
#include <stdio.h>
#include <stdlib.h>
#define M 10001

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int search(int v[], int size, int key)
{
	int i;
	for(i = 0 ; i < size ; i++)
	{
		if(v[i] == key)
			return i;
		if(v[i] > key)
			return -1;
	}
	
	return -1;
}

int main()
{
	int N, Q, caso = 0;
	
	while(scanf("%d%d",&N,&Q) && N && Q)
	{
		int i, marble[M];
		
		for(i = 0 ; i < N ; i++)
			scanf("%d",&marble[i]);
		qsort(marble, N, sizeof(int), compare);
		
		int key[M], index[M];
		
		for(i = 0 ; i < Q ; i++)
		{
			scanf("%d",&key[i]);
			index[i] = search(marble, N, key[i]);
		}
		
		printf("CASE# %d:\n", ++caso);
		for(i = 0 ; i < Q ; i++)
		{
			if(index[i] == -1)
				printf("%d not found\n",key[i]);
			else
				printf("%d found at %d\n",key[i],index[i]+1);
		}
	}
	
	return 0;
}