//1069
#include <bits/stdc++.h>
using namespace std;

int solve()
{
	string s;
	stack<char> d;
	int count = 0;
	
	cin >> s;
	
	for(int i = 0; s[i]; i++)
	{
		if(s[i] == '<') d.push(s[i]);
		if(s[i] == '>' && !d.empty())
			if(d.top() == '<')
			{
				d.pop();
				count ++;
			}
	}
	
	return count;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--) printf("%d\n", solve());
}