//2682
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n[10002], solution = 0;
	int i = 0;
	bool solved = false;
	
	while(scanf("%Ld", &n[i]) != EOF)
	{
		if(!solved && i > 0 && n[i - 1] >= n[i])
		{
			solved = true;
			solution = n[i - 1] + 1;
			i++;
		}
		
		else i++;
	}
	
	if(!solved) solution = n[i - 1] + 1;
	
	cout << solution << endl;
}
