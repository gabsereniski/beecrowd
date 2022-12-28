#include <stdio.h>
 
int main() {
 
    int n, h;
	float rh, s;
	scanf("%d %d %f", &n, &h, &rh);
	s = rh*h;
	printf("NUMBER = %d\nSALARY = U$ %.2f\n", n, s);
 
    return 0;
}