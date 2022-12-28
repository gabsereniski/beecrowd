//1238
#include <stdio.h>
#include <string.h>

int max(int a, int b)
{
	if(a >= b) return a;
	
	return b;
}

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		char a[51] = {}, b[51] = {};
		
		scanf("%s %s", a, b), getchar();
		
		int i = 0, j = 0;
		int len1 = strlen(a), len2 = strlen(b);
		int len = max(len1, len2);
		
		while(len--)
		{
			if(i < len1) printf("%c", a[i++]);
			if(j < len2) printf("%c", b[j++]);
		}
		
		puts("");
	}
	
	return 0;
}