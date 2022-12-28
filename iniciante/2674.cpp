//2675
#include <bits/stdc++.h>
using namespace std;

int crivo(int p)
{
	if(p == 1) return 0;
	if(p == 2) return 1;
	if(p == 3) return 1; 
	if(!(p % 2) || !(p % 3)) return 0;
	
	for(int i = 5; i*i <= p; i += 2)
		if(!(p % i)) return 0;
	
	return 1;
}

int main()
{
	int n;
	
	while(cin >> n)
	{
		int c = crivo(n);
		
		if(!c) cout << "Nada\n";
		
		else
		{
			int alg[10001] = {};
			int i = 0;
			
			while(n > 0)
			{
				alg[i++] = n % 10;
				n /= 10;
			}
			
			int f;
			
			for(int j = 0; j < i; j++)
			{
				f = crivo(alg[j]);
				if(!f) break;
			}
			
			if(f) cout << "Super\n";
			else  cout << "Primo\n";
		}
	}
}