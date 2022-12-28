//2288
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, c, teste = 0;
	
	while(cin >> l >> c && l && c)
	{
		int tv[l][c];
		
		for(int i = 0; i < l; i++)
			for(int j = 0; j < c; j++)
				cin >> tv[i][j];
		
		int sx = 0, sy = 0;
		int x, y;
		
		while(cin >> x >> y && (x || y))
		{
			sx += x;
			sy += y;
		}
		sy = -sy;
		
		cout << "Teste " << ++teste << endl;
		for(int i = 0; i < l; i++)
		{
			for(int j = 0; j < c; j++)
			{
				int ii = (l + (i - sy) % l) % l;
				int jj = (c + (j - sx) % c) % c;
				
				cout << tv[ii][jj];
				if(j < c-1) cout << " ";
			}
			
			puts("");
		}
		puts("");
	}
}