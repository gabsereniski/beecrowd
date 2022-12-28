//1024
#include <stdio.h>
#include <string.h>
int main()
{
	int n, len;
	char s[1002], t[1002];
	
	scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(s);
		len = strlen(s);
		int i;
		for(i=0;i<len;i++)
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
				s[i]+=3;
		
		int j=0;
		for(i=len-1;i>=0;i--)
		{
			t[j]=s[i];
			j++;
		}
		t[j] = '\0';
		
		int k = len/2;
		
		for(i=k;i<len;i++)
			t[i]-=1;
		
		printf("%s\n",t);
	}
	
	return 0;
}
