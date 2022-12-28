//2414
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int maior = 0;
	
	while((cin >> n) && n)
	{
		if(n > maior)
			maior = n;
	}
	
	cout << maior << endl;
}