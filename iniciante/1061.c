//1061
#include <stdio.h>
int main()
{
	int d1, h1, m1, s1, d2, h2, m2, s2, d, h, m, s, t, SDI, SDF;
	char dia[4];
	scanf("%s",dia);
	scanf("%d",&d1);
	scanf("%d : %d : %d",&h1,&m1,&s1);
	scanf("%s",dia);
	scanf("%d",&d2);
	getchar();
	scanf("%d : %d : %d",&h2,&m2,&s2);
	
    SDI = s1 + (m1*60) + (h1*3600) + (d1*24*3600);
    SDF = s2 + (m2*60) + (h2*3600) + (d2*24*3600);
    t = SDF - SDI;

	d = t/(24*60*60);
	
	t%=(24*60*60);
	h = t/(60*60);
		
	t%=(60*60);
	m = t/60;
		
	t%=60;
	s = t;
	
	printf("%d dia(s)\n",d);
	printf("%d hora(s)\n",h);
	printf("%d minuto(s)\n",m);
	printf("%d segundo(s)\n",s);	
	
	
	return 0;
}