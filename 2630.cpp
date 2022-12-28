//2630
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, caso = 1;
	
	cin >> n;
	
	while(n--)
	{
		char f[10] = {};
		
		cin >> f;
		
		getchar();
		
		int r, g, b;
		
		cin >> r >> g >> b;
		
		printf("Caso #%d: ", caso++);
		
		if(!strcmp(f, "eye"))
			printf("%d\n", int(0.30*r + 0.59*g + 0.11*b));
		
		else if(!strcmp(f, "mean"))
			printf("%d\n", int((r + g + b)/3.0));
		
		else if(!strcmp(f, "min"))
			printf("%d\n", min(r, min(g, b)));
		
		else if(!strcmp(f, "max"))
			printf("%d\n", max(r, max(g, b)));
	}
}