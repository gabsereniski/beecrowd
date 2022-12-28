#include <stdio.h>
 
int main() {
 
    double A, B, C, M;
	scanf("%4lf %4lf %4lf", &A, &B, &C);
	M = (2*A+3*B+5*C)/10;
	printf("MEDIA = %.1lf\n", M);
 
    return 0;
}