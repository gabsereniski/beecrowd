#include <stdio.h>
 
int main() {
 
    int cem, cinq, v, dz, c, d, u, vlr, vlr1;
	scanf("%d", &vlr);
	
	vlr1 = vlr;
	
	cem = vlr/100;
	vlr-=cem*100;
	
	cinq = vlr/50;
	vlr-=cinq*50;
	
	v = vlr/20;
	vlr-=v*20;
	
	dz = vlr/10;
	vlr-=dz*10;
	
	c = vlr/5;
	vlr-=c*5;
	
	d = vlr/2;
	vlr-=d*2;
	
	u = vlr;
	
	printf("%d\n", vlr1);
	printf("%d nota(s) de R$ 100,00\n",cem);
	printf("%d nota(s) de R$ 50,00\n",cinq);
	printf("%d nota(s) de R$ 20,00\n",v);
	printf("%d nota(s) de R$ 10,00\n",dz);
	printf("%d nota(s) de R$ 5,00\n",c);
	printf("%d nota(s) de R$ 2,00\n",d);
	printf("%d nota(s) de R$ 1,00\n",u);
 
    return 0;
}