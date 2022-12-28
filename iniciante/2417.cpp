//2417
#include <bits/stdc++.h>
using namespace std;

int c[3], f[3];

char solve()
{
	if(c[0] > f[0]) return 'C';
	if(c[0] < f[0]) return 'F';
	if(c[2] > f[2]) return 'C';
	if(c[2] < f[2]) return 'F';
	return '=';
}

int main()
{
	scanf("%d%d%d", &c[0], &c[1], &c[2]);
	scanf("%d%d%d", &f[0], &f[1], &f[2]);
	
	c[0] *= 3, f[0] *= 3;
	c[0] += c[1], f[0] += f[1];
	
	printf("%c\n", solve());
}
