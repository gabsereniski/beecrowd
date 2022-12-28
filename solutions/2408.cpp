//2408
#include <bits/stdc++.h>
using namespace std;

int c[3];

int main()
{
	scanf("%d%d%d", &c[0], &c[1], &c[2]);
	
	sort(c, c + 3);
	
	printf("%d\n", c[1]);
}