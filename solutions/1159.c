//1159
#include <stdio.h>
int main()
{
	int n, i, s=0;
	scanf("%d",&n);
	while(n)
	{
		if(n%2!=0) n+=1;
		for(i=n;i<n+10;i+=2)
			s+=i;
		printf("%d\n",s);
		s=0;
		scanf("%d",&n);
	}
	
	return 0;
}