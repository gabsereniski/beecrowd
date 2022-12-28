//G
#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) 
{
    return b == 0 ? a : mdc(b, a % b);
}

int main()
{
	int p, t;
	
	cin >> p >> t;
	
	int v[2000] = {};
	
	for(int i = 0; i < p; i++)
	{
		int r;
		
		cin >> r;
		
		v[r]++;
	}
	
	int e = INT_MAX;
		
	for(int i = 1; i <= t; i++)
		if(v[i] < e) e = v[i];
	
	printf("%d\n", e);
}