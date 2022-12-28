//2152
#include <stdio.h>
int main()
{
	int e, h, m, b;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d %d %d",&h,&m,&b);
		printf("%02d:%02d - A porta ",h,m);
		if(b==1) printf("abriu!\n");
		else printf("fechou!\n");
		e--;
	}
	
	return 0;
}