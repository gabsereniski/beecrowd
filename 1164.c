//1164.c
#include <stdio.h>
int main()
{
	int e, n, i, s=0;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			if(n%i==0)
				s+=i;
		}
		if(s==n) printf("%d eh perfeito\n",n);
		else printf("%d nao eh perfeito\n",n);
		e--;
		s=0;
	}
	
	return 0;
}