#include <stdio.h>
 
int main() {
 
    int t, a, m, d;
	scanf("%d",&t);
	a = t/365;
	t-=a*365;
	m = t/30;
	t-=m*30;
	d = t;
	printf("%d ano(s)\n",a);
	printf("%d mes(es)\n",m);
	printf("%d dia(s)\n",d);
 
    return 0;
}