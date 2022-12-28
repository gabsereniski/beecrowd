//1160.c
#include <stdio.h>
int main()
{
	int t, pa, pb, a=0;
	double g1, g2, pc1, pc2;
	scanf("%d",&t);
	while(t)
	{
		scanf("%d%d%lf%lf",&pa,&pb,&g1,&g2);
		while(pb>=pa)
		{
			pa*=((g1/100)+1);
			pb*=((g2/100)+1);
			a++;
			
			if(a>100)
			{
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		
		if(a<101)
			printf("%d anos.\n",a);
		
		a=0;
		t--;
	}
	
	return 0;
}