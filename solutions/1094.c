//1094.c
#include <stdio.h>
int main()
{
	char t;
	int e, n, c=0, r=0, s=0, tt=0, i;
	float pc, pr, ps;
	scanf("%d",&e);
	while(e)
	{
		scanf("%d %c",&n,&t);
		switch(t)
		{
			case 'C': c+=n; break;
			case 'R': r+=n; break;
			case 'S': s+=n; break;
		}
		e--;
	}
	tt=c+r+s;
	pc = (float)c*100/tt;
	pr = (float)r*100/tt;
	ps = (float)s*100/tt;
	printf("Total: %d cobaias\n",tt);
	printf("Total de coelhos: %d\n",c);
	printf("Total de ratos: %d\n",r);
	printf("Total de sapos: %d\n",s);
	printf("Percentual de coelhos: %.2f %%\n",pc);
	printf("Percentual de ratos: %.2f %%\n",pr);
	printf("Percentual de sapos: %.2f %%\n",ps);
	
	
	return 0;
}
