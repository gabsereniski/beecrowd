#include <stdio.h>
 
int main() {
 
    double A, B, C, tri, cir, trap, sq, rec, pi = 3.14159;
	scanf("%lf%lf%lf", &A, &B, &C);
	tri = (A*C)/2;
	cir = pi*C*C;
	trap = (A+B)*C/2.0;
	sq = B*B;
	rec = A*B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",tri,cir,trap,sq,rec);
 
    return 0;
}