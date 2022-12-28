//2394
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p, r;
	
	cin >> p >> r;
	
	int player[102] = {};
	
	for(int i = 0; i < p; i++)
		for(int j = 0; j < r; j++)
		{
			int t;
			cin >> t;
			player[i] += t;
		}
	
	cout << 1 + min_element(player, player + p) - player << endl;
}