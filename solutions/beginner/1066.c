#include <stdio.h>
 
int main() {
 
    int n, i, cp=0, ci=0, cps=0, cn=0;
	for (i=1;i<=5;i++)
	{
		scanf("%d", &n);
		if (n%2==0) cp++;
		else ci++;
		if(n>0) cps++;
		else if (n<0) cn++;
	}
	printf ("%d valor(es) par(es)\n", cp);
	printf ("%d valor(es) impar(es)\n", ci);
	printf ("%d valor(es) positivo(s)\n", cps);
	printf ("%d valor(es) negativo(s)\n", cn);
 
    return 0;
}