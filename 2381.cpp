//c
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	char n[30];
} nomes;

int compare(const void *a, const void *b)
{
	nomes x = *(nomes*)a;
	nomes y = *(nomes*)b;
	
	return strcmp(x.n, y.n);
}

int main()
{
	int n, ind;
	
	cin >> n >> ind;
	
	nomes lista[101];
	
	for(int i = 0; i < n; i++)
		cin >> lista[i].n;
	
	qsort(lista, n, sizeof(nomes), compare);
	
	printf("%s\n", lista[ind - 1].n);
}