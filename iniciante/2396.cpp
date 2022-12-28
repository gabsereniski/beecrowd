//2394
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;

int main()
{
	int p, r;
	
	cin >> p >> r;
	
	ii player[102] = {{},{}};
	
	for(int i = 0; i < p; i++)
	{
		player[i].second = i;
		
		for(int j = 0; j < r; j++)
		{
			int t;
			cin >> t;
			player[i].first += t;
		}
	}
	
	sort(player, player + p);
	
	for(int i = 0; i < 3; i++)
		cout << player[i].second + 1 << endl;

}