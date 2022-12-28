//E
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int max;
	
	cin >> max;
	
	int a, b;
	char op;
	
	cin >> a >> op >> b;
	
	int r;
	
	if(op == '+') r = a + b;
	else r = a * b;
	
	printf("%s\n", r > max ? "OVERFLOW" : "OK");
}