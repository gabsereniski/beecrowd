//R
#include <bits/stdc++.h>
using namespace std;

int m[102][102];
int n;

void add(int i, int j)
{
	if(i >= 0 && i < n && j >= 0 && j < n)
		m[i][j]++;
}

int main()
{
	int k;
	
	cin >> n >> k;
	
	for(int i = 0; i < k; i++)
	{
		int x, y, d;
		
		cin >> y >> x >> d;
		
		add(y - d, x);
		add(y + d, x);
		
		for(int dy = -d + 1; dy <= d - 1; dy++)
		{
			int dx;
			
			if(dy < 0) dx = d + dy;
			else       dx = d - dy;
			
			add(y + dy, x + dx);
			add(y + dy, x - dx);
		}
	}
	
	int x = 0, y = 0, f = 0;
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		{
			if(m[i][j] == k && f)
				return !printf("-1 -1\n");
				
			if(m[i][j] == k && !f)
				x = j, y = i, f = 1;
		}
		
	printf("%d %d\n", y, x);
}