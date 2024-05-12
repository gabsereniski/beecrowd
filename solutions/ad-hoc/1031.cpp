//1031
#include <bits/stdc++.h>
using namespace std;

int remaining(int cities, int jump)
{
	int r = 0;
	
	for(int i = 1; i < cities; i++)
		r = (r + jump) % i;
	
	return r;
}

int main()
{
	int ncities;
	
	while((cin >> ncities) && ncities)
	{
		int safe, jump;
		
		for(int i = 1; ; i++)
		{
			safe = remaining(ncities, i);
			
			if(safe == 11)
			{
				jump = i;
				break;
			}
		}
		
		cout << jump << endl;
	}
}