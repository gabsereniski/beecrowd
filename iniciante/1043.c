#include <stdio.h>
 
int main() {
 
    float A, B, C;
	scanf("%f %f %f", &A, &B, &C);
	if ((A>B)&&(A>C)&&(B+C>A)||(B>A)&&(B>C)&&(A+C>B)||(C>A)&&(C>B)&&(A+B>C)||(A==B)&&(B==C))
	{
		printf("Perimetro = %.1f\n",(A+B+C));
	}
	else
	{
		printf("Area = %.1f\n",((A+B)*C)/2.0);
	}
 
    return 0;
}