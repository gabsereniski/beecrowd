//1216 uri
#include <stdio.h>
int main()
{
	char s[101];
	double d, t, n=0;
	while(gets(s))
	{
		scanf("%lf",&d);
		t+=d;
		n+=1;
	}
	printf("%.1lf\n",t/n);
	
	return 0;
}