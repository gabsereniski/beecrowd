//2221
#include <stdio.h>
int main()
{
	int a1, a2, d1, d2, l1, l2, b, e;
	double g1, g2;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d",&b);
		scanf("%d%d%d",&a1,&d1,&l1);
		scanf("%d%d%d",&a2,&d2,&l2);
		
		g1 = ((a1+d1)/2.0);
		g2 = ((a2+d2)/2.0);
		
		if(l1%2==0)
			g1+=b;
		if(l2%2==0)
			g2+=b;
		
		if(g1>g2) printf("Dabriel\n");
		else if(g1==g2) printf("Empate\n");
		else printf("Guarte\n");
	}
	
	return 0;
}