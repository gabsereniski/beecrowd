//2393
#include <bits/stdc++.h>
using namespace std;

int m[102][102];

int main()
{
	int n;
		
	cin >> n;
	
	while(n--)
	{
		int xi, xf, yi, yf;
		
		cin >> xi >> xf >> yi >> yf;
		
		for(int i = yi - 1; i < yf - 1; i++)
			for(int j = xi - 1; j < xf - 1; j++)
				m[i][j] = 1;
	}
	
	int c = 0;
	
	for(int i = 0; i < 100 ; i++)
		for(int j = 0; j < 100; j++)
			if(m[i][j]) c++;
			
	cout << c << endl;
}