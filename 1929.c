//1929
#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main()
{
	int v[4], i;
	for(i=0;i<4;i++)
		scanf("%d",&v[i]);
	
	qsort(v,4,sizeof(int),compare);
	
	int a, b;
	
	a = v[0] + v[1];
	b = v[1] + v[2];
	
	if(v[2] < a || v[3] < b)
		printf("S\n");
	
	else
		printf("N\n");
	
	return 0;
}
