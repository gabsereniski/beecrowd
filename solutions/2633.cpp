//2633
#include <bits/stdc++.h>
using namespace std;

typedef struct
{
	char tipo[21];
	int kg;
} carne;

int compare(const void *a, const void *b)
{
	carne x = *(carne*)a;
	carne y = *(carne*)b;
	
	if(x.kg < y.kg) return -1;
	if(x.kg > y.kg) return 1;
	
	return 0;
}

int main()
{
	int c;
	
	while(cin >> c)
	{
		carne v[c];
		
		for(int i = 0; i < c; i++)
			cin >> v[i].tipo >> v[i].kg;
	
		qsort(v, c, sizeof(carne), compare);
		
		for(int i = 0; i < c; i++)
		{
			printf("%s", v[i].tipo);
			if(i < c-1) printf(" ");
		}
		
		puts("");
	}
}
