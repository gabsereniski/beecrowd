#include <stdio.h>
 
int main() {
 
    int X;
	float Y, C;
	scanf("%d %f", &X, &Y);
	C = X/Y;
	printf("%.3f km/l\n", C);
 
    return 0;
}