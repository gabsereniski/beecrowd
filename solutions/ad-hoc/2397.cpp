#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[3];
	
	cin >> a[0] >> a[1] >> a[2];
	
	sort(a, a+3);
	
	if(a[0] + a[1] <= a[2])
		puts("n");
	else {
		int x = a[0] * a[0];
		int y = a[1] * a[1];
		int z = a[2] * a[2];
		int xy = x + y;
		
		if(xy == z)
			puts("r");
		else if(xy < z)
			puts("o");
		else if(xy > z)
			puts("a");
	}
}