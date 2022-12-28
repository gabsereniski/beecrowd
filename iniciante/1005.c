#include <stdio.h>
 
int main() {
 
    double A, B, M;
	scanf("%4lf %4lf", &A, &B);
	M = (0.35*A+0.75*B)/1.1;
	printf("MEDIA = %.5lf\n", M);
 
    return 0;
}