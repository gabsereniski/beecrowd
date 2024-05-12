#include <stdio.h>
 
int main() {
 
    int t, v, d;
	float g;
	scanf("%d %d", &t, &v);
	d = t*v;
	g = d/12.0;
	printf("%.3f\n", g);
 
    return 0;
}