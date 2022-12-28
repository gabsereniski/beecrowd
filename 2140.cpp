//2140.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	int change[] = {7, 12, 22, 52, 102, 15, 25, 55,
		            105, 30, 60, 110, 70, 120, 150,
		            4, 10, 20, 40, 100, 200};
	
	while(scanf("%d%d", &n, &m) && n && m)
	{
		bool possible = false;
		
		m -= n;
		
		for(int i = 0; i < 21; i++)
			if(m == change[i])
			{
				possible = true;
				break;
			}
		
		if(possible) cout << "possible\n";
		else         cout << "impossible\n";
	}
}