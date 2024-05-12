//2552
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int m, n;
	
	while(cin >> m >> n)
	{	
		int grid[m][n];
		
		for(int i = 0; i < m; i++)
			for(int j = 0; j < n; j++)
				cin >> grid[i][j];
		
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(grid[i][j] == 1) cout << "9";
				
				else
				{
					int my[] = {0, 1, 0, -1};
					int mx[] = {-1, 0, 1, 0};
					int p = 0;
					
					for(int k = 0; k < 4; k++)
					{
						int ii = my[k] + i;
						int jj = mx[k] + j;
						
						if(ii >= 0 && ii < m && jj >= 0 && jj < n)
							p += grid[ii][jj];
					}
					
					cout << p;
				}
			}
			
			cout << endl;
		}
	}
}