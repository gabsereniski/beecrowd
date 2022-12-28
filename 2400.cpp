//2400
#include <bits/stdc++.h>
using namespace std;

#define MAX 100002

int st[4*MAX];
int n;

void insert(int i, int node = 1, int b = 0, int e = n)
{
	if(b > i || e < i) return;
	if(b == e) return void(st[node] = 1);
	
	int mid = (b + e)/2;
	int l = 2*node, r = 2*node + 1;
	
	insert(i, l, b, mid);
	insert(i, r, mid + 1, e);
	
	st[node] = st[l] + st[r];
}

int count(int i, int j, int node = 1, int b = 0, int e = n)
{
	if(i > e || j < b) 		return 0;
	if(i <= b && j >= e) 	return st[node];
	
	int mid = (b + e)/2;
	int l = 2*node, r = 2*node + 1;
	
	return count(i, j, l, b, mid) + count(i, j, r, mid + 1, e);
}	
	
int main()
{
	int swaps = 0;
	
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
		int s;
		scanf("%d", &s);
		
		insert(s);
		swaps += count(s + 1, n);
		
	}
	
	printf("%d\n", swaps);
}