//2415
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p = 1;
	int n;
	
	scanf("%d", &n);
	
	while(n >= 2)
	{
		n /= 2;
		p *= 4;
	}
	
	printf("%d\n", p);
}
