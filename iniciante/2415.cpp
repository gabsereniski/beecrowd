//2415
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	
	double v[10003] = {};
	
	for(int i = 0; i < n; i++)
		scanf("%lf", &v[i]);
		
	double a = v[0];
	int c = 1;
	int maior = -1;
	
	for(int i = 1; i < n; i++)
	{
		if(a == v[i])
		{
			c++;
			if(c > maior) maior = c;
		}
		
		else
		{
			a = v[i];
			c = 1;
		}
	}
	
	printf("%d\n", maior);
}