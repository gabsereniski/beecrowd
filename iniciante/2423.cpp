//2423
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x, y, z;
	
	scanf("%d%d%d", &x, &y, &z);
	
	printf("%d\n", min(x/2, min(y/3, z/5)));
}