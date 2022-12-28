//j
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	int x, y, z;
	
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	
	int nc = x/a;
	int nl = y/b;
	int nh = z/c;
	
	cout << nc*nl*nh << endl;
}
	
	