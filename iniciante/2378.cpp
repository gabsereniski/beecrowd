//e
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p = 0;
	bool sim = false;
	int l, max;
	
	cin >> l >> max;
	
	while(l--)
	{
		int s, e;
		
		cin >> s >> e;
		
		p -= s;
		p += e;
		
		if(p > max) sim = true;
	}
	
	printf("%c\n", sim ? 'S' : 'N');
}
		