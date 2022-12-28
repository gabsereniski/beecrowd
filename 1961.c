//1961.c
#include <stdio.h>
int main()
{
	int j, p, n1, n2;
	scanf("%d%d",&j,&p);
	scanf("%d",&n1);
	p-=1;
	while(p)
	{
		scanf("%d",&n2);
		if(n2-n1>j||n2-n1<-j)
		{
			printf("GAME OVER\n");
			break;
		}
		n1=n2;
		p--;
	}
	if(p==0) printf("YOU WIN\n");
	
	return 0;
}