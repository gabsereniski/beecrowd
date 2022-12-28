//G
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	cin >> a;
	
	if(a ==  0) printf("E\n");
	else if(a > 0 && a < 36) printf("D\n");
	else if(a > 35 && a < 61) printf("C\n");
	else if(a > 60 && a < 86) printf("B\n");
	else if(a > 85 && a <= 100) printf("A\n");
}