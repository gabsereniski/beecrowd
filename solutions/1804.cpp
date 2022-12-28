#include <bits/stdc++.h>
using namespace std;

#define MAXN 100003

int tree[MAXN];

void build(int x, int n, int size)
{
	while(x <= size)
	{
		tree[x] += n;
		x += (x & -x);
	}
}

int query(int x)
{
	int sum = 0;
	
	while(x > 0)
	{
		sum += tree[x];
		x -= (x & -x);
	}
	
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	
	int v[n + 1];
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &v[i]);
		build(i, v[i], n);
	}
	
	char q;
	int i;
	
	while(scanf(" %c%d", &q, &i) != EOF)
	{
		if(q == 'a')     build(i, -v[i], n);
		else   printf("%d\n", query(i - 1));
	}
	
	return 0;
}