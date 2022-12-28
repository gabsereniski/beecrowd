//1103
#include <stdio.h>

int main()
{
	int h1, m1, h2, m2;
	while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2) && (h1 || m1 || h2 || m2))
	{
		if(h1 == 0)
			h1 += 24;
		if(h2 == 0)
			h2 += 24;
		
		int MI = m1 + (h1*60);
		int MF = m2 + (h2*60);
		int t = MF - MI;
		
		if(t < 0)
			t += 1440;
		
		printf("%d\n",t);
	}
	
	return 0;
}