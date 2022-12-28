//O
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		stack<char> p;
		
		int flag = 0;
		
		char str[100002];
		scanf(" %s", str);
		
		for(int i = 0; str[i]; i++)
		{
			char c = str[i];
			
			if(c == '(' || c == '[' || c == '{') p.push(c);
			
			if(c == ')' && !p.empty() && p.top() == '(') p.pop();
			else if(c == ')') flag = 1;
			if(c == ']' && !p.empty() && p.top() == '[') p.pop();
			else if(c == ']') flag = 1;
			if(c == '}' && !p.empty() && p.top() == '{') p.pop();
			else if(c == '}') flag = 1;
		}
		
		//~ cout << p.size() << endl;
		
		if(flag || !p.empty()) puts("N");
		else     puts("S");
	}
}