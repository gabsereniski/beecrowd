//2670
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	
	cin >> a >> b >> c;
	
	int m = INT_MAX;
	
	if(2*b + 4*c < m) m = 2*b + 4*c;
	if(2*a + 2*c < m) m = 2*a + 2*c;
	if(4*a + 2*b < m) m = 4*a + 2*b;
	
	printf("%d\n", m);
}