//2147
#include <stdio.h>
#include <string.h>
int main()
{
	int n, l;
	float t;
	char s[10000];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",s);
		l=strlen(s);
		t =l/100.0;
		printf("%.2f\n",t);
	}
	
	return 0;
}