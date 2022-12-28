//2531
#include <bits/stdc++.h>
using namespace std;

#define INF 1001001001
#define M 100004

int shop[M];
int stM[4*M];
int stm[4*M];

void buildM(int node, int b, int e)
{
	if(b == e) stM[node] = shop[e];
	
	else
	{
		int mid = (b + e)/2;
		int l = 2 * node, r = 2 * node + 1;
		
		buildM(l, b, mid);
		buildM(r, mid + 1, e);
		
		stM[node] = max(stM[l], stM[r]);
	}
}

void updateM(int node, int b, int e, int i)
{
	if(b > i || e < i) return;
	if(b == e)         stM[node] = shop[i];
	
	else
	{
		int mid = (b + e)/2;
		int l = 2 * node, r = 2 * node + 1;
		
		updateM(l, b, mid, i);
		updateM(r, mid + 1, e, i);
		
		stM[node] = max(stM[l], stM[r]);
	}
}

void buildm(int node, int b, int e)
{
	if(b == e) stm[node] = shop[e];
	
	else
	{
		int mid = (b + e)/2;
		int l = 2 * node, r = 2 * node + 1;
		
		buildm(l, b, mid);
		buildm(r, mid + 1, e);
		
		stm[node] = min(stm[l], stm[r]);
	}
}

void updatem(int node, int b, int e, int i)
{
	if(b > i || e < i) return;
	if(b == e)         stm[node] = shop[i];
	
	else
	{
		int mid = (b + e)/2;
		int l = 2 * node, r = 2 * node + 1;
		
		updatem(l, b, mid, i);
		updatem(r, mid + 1, e, i);
		
		stm[node] = min(stm[l], stm[r]);
	}
}

int queryM(int node, int b, int e, int i, int j)
{
	if(b > j || e < i)   return -INF;
	if(b >= i && e <= j) return stM[node];
	
	int mid = (b + e)/2;
	int l = 2 * node, r = 2 * node + 1;
	
	return max(queryM(l, b, mid, i, j),
			   queryM(r, mid + 1, e, i, j));
}

int querym(int node, int b, int e, int i, int j)
{
	if(b > j || e < i)   return INF;
	if(b >= i && e <= j) return stm[node];
	
	int mid = (b + e)/2;
	int l = 2 * node, r = 2 * node + 1;
	
	return min(querym(l, b, mid, i, j),
			   querym(r, mid + 1, e, i, j));
}

int main()
{
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		for(int i = 0; i < n; i++)
			scanf("%d", &shop[i]);
		
		buildM(1, 0, n-1), buildm(1, 0, n-1);
		
		int q;
		
		scanf("%d", &q);
		
		while(q--)
		{
			int type;
			int i, j, p;
			
			scanf("%d", &type);
			type--;
			
			if(type)
			{
				scanf("%d %d", &i, &j);
				i--, j--;
				
				printf("%d\n", queryM(1, 0, n-1, i, j) - querym(1, 0, n-1, i, j));
			}
			
			else
			{
				scanf("%d %d", &i, &p);
				i--;
				
				shop[i] = p;
				
				updateM(1, 0, n-1, i);
				updatem(1, 0, n-1, i);
			}
		}
	}
}