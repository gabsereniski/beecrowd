//1166
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; scanf("%d", &t);
	
	while(t--)
	{
		int n; scanf("%d", &n);		
		stack<int> p[n];
		bool possible = true;
		int num = 0;
		
		while(possible)
		{
			possible = false;
			
			for(int i = 0; i < n; i++)
			{
				if(p[i].empty())
				{
					p[i].push(num + 1);
					possible = true;
					break;
				}
			
				int h = p[i].top();
				double sq = sqrt(h + num + 1);
				
				if(!(sq - (int)sq))
				{
					p[i].push(num + 1);
					possible = true;
					break;
				}
			}
			
			num++;
		}
		
		printf("%d\n", num - 1);
	}
	
}