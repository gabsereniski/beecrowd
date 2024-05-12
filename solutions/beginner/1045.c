#include <stdio.h>
 
int main() {
 
    double A, B, C;
	scanf("%lf %lf %lf", &A, &B, &C);
	if ((A>=B+C)||(B>=A+C)||(C>=A+B))
	{
		printf("NAO FORMA TRIANGULO\n");
	}
	else
	{
		if ((A*A) == (B*B) + (C*C)) printf("TRIANGULO RETANGULO\n");
		else if ((B*B) == (A*A) + (C*C)) printf("TRIANGULO RETANGULO\n");
		else if ((C*C) == (A*A) + (B*B)) printf("TRIANGULO RETANGULO\n");
		
		else if ((A*A) > (B*B) + (C*C)) printf("TRIANGULO OBTUSANGULO\n");
		else if ((B*B) > (A*A) + (C*C)) printf("TRIANGULO OBTUSANGULO\n");
		else if ((C*C) > (A*A) + (B*B)) printf("TRIANGULO OBTUSANGULO\n");
		
		else printf("TRIANGULO ACUTANGULO\n");
		
		if((A==B)&&(B==C)) printf("TRIANGULO EQUILATERO\n");
		else if ((A==B)&&(B!=C)) printf("TRIANGULO ISOSCELES\n");
		else if ((A==C)&&(C!=B)) printf("TRIANGULO ISOSCELES\n");
		else if ((B==C)&&(A!=B)) printf("TRIANGULO ISOSCELES\n");
	}
 
    return 0;
}