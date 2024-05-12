//L
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, s;
	
	cin >>n >> s;
	
	int v[100] = {};
	
	for(int i = 0; i < s; i++)
	{
		int x, r;
		
		cin >> x >> r;
		x--;
		
		for(int j = x; j < n; j+=r)
			v[j] = 1;
		
		for(int j = x; j >= 0; j-=r)
			v[j] = 1;
	}
	
	for(int i = 0; i < n; i++)
		cout << v[i] << endl;
}