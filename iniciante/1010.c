#include <stdio.h>
 
int main() {
 
    int code1, uni1, code2, uni2;
	float pr1, pr2, total;
	scanf("%d%d%f", &code1, &uni1, &pr1);
	scanf("%d%d%f", &code2, &uni2, &pr2);
	total = uni1*pr1 + uni2*pr2;
	printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}