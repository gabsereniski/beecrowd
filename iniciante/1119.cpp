//1069
#include <bits/stdc++.h>
using namespace std;

int n, k, m;

void solve()
{
	int q[n];

	for(int i = 0; i < n; i++) q[i] = i + 1;

	int ih = 0, ia = n - 1;
	int rh, ra;
	int c = 0;
	int i;

	while(c < n)
	{
		i = k;
		
		while(i)
		{ 
			if(q[ih]) i--;
			if(!i)    rh = ih;
			ih = (ih + 1) % n;
		}
		
		int i = m;
		
		while(i)
		{
			if(q[ia]) i--;
			if(!i)    ra = ia;
			ia = (ia + n - 1) % n; 
		}
		
		if(c) printf(",");
		if(ra != rh)
		{
			printf("%3d%3d", q[rh], q[ra]);
			c += 2;
		}
		
		else
		{
			printf("%3d", q[ra]);
			c++;
		}
		
		q[rh] = q[ra] = 0;
	}
	puts("");
}

int main()
{	
	while(scanf("%d%d%d",&n, &k, &m) && n) solve();
}