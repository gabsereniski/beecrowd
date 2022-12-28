#include <stdio.h>
 
int main() {
 
    char name;
	double cSlry, sold, tSlry;
	scanf("%s %lf %lf", &name, &cSlry, &sold);
	tSlry = cSlry + sold*0.15;
	printf("TOTAL = R$ %.2lf\n", tSlry);
 
    return 0;
}