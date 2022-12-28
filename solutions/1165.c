//1165.c
#include <stdio.h>
int main()
{
	int e, n, i, s=0;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
				s++;
		}
		if(s==2) printf("%d eh primo\n",n);
		else printf("%d nao eh primo\n",n);
		s=0;
		e--;
	}
	
	return 0;
}