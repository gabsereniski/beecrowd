//2380
#include <bits/stdc++.h>
using namespace std;

int bank[100002], sum[100002];

int find(int x)
{
	if(bank[x] == x) return x;
	
	return bank[x] = find(bank[x]);
}

void merge(int a, int b)
{
	int x, y;
	
	x = find(a);
	y = find(b);
	
	if(x == y) return;
	else if(x < y)
	{
		bank[y] = x;
		sum[x]+= sum[y];
	}
	else if(x > y) 
	{
		bank[x] = y;
		sum[y] += sum[x];
	}
}

int main()
{
	int banks, actions;
	
	cin >> banks >> actions;
	
	for(int i = 0; i < banks; i++)
	{
		bank[i] = i;
		sum[i] = 1;
	}
	
	while(actions--)
	{
		char action;
		int a, b;
		
		cin >> action >> a >> b;
		
		switch(action)
		{
			case 'C':
			//
				if(find(a-1) == find(b-1))
					cout << "S\n";
				else
					cout << "N\n";
				break;
			//
			
			case 'F':
			//
				merge(a-1, b-1);
				break;
			//
		}
	}
}