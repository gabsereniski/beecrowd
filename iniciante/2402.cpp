//J
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	
	scanf("%lld", &n);
	
	for(long long i = 2; i*i <= n; i++)
	{
		if(n%i == 0)
			return !printf("S\n");
	}
	
	printf("N\n");
}
