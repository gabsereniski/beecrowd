//2667
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s = 0;
	
	string n;
	
	cin >> n;
	
	for(auto i = 0u; i < n.size(); i++)
		s += n[i] - '0';
		
	cout << s % 3 << endl;
}