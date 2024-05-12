//1252
#include <stdio.h>
#include <stdlib.h>

long long int n, m, i;

int compare(const void *a, const void *b)
{
	long long int x = *(long long int*)a;
	long long int y = *(long long int*)b;
	
	if(x % m < y % m)                 return -1;
	if(x % m > y % m)                 return  1;
	if(x % 2 && !(y % 2))             return -1;
	if(!(x % 2) && y % 2)             return  1;
	if(x % 2 && y % 2 && x > y)       return -1;
	if(x % 2 && y % 2 && x < y)       return  1;
	if(!(x % 2) && !(y % 2) && x < y) return -1;
	if(!(x % 2) && !(y % 2) && x > y) return  1;
	
	return 0;
}

int main()
{	
	while(1)
	{
		scanf("%lld%lld", &n, &m);
		
		if(!m && !n)
		{
			printf("%lld %lld\n", n, m);
			break;
		}
		
		long long int v[10001] = {};
		
		for(i = 0; i < n; i++)
			scanf("%lld", &v[i]);
		
		qsort(v, n, sizeof(long long int), compare);
		
		printf("%lld %lld\n", n, m);
		
		for(i = 0; i < n; i++)
			printf("%lld\n", v[i]);
	}
	
	return 0;
}

/*
15 3 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 3 3 9 12 10 5 10 -51 -45 -100 8 15 0 0
*/