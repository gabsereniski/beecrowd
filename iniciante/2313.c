#include <stdio.h>
 
int main() {
 
    double A, B, C;
	scanf("%lf %lf %lf", &A, &B, &C);
	if ((A>=B+C)||(B>=A+C)||(C>=A+B))
	{
		printf("Invalido\n");
	}
	else
	{					
		if((A==B)&&(B==C)) printf("Valido-Equilatero\n");
		else if ((A==B)&&(B!=C)) printf("Valido-Isoceles\n");
		else if ((A==C)&&(C!=B)) printf("Valido-Isoceles\n");
		else if ((B==C)&&(A!=B)) printf("Valido-Isoceles\n");
		else if ((A!=B)&&(B!=C)) printf("Valido-Escaleno\n");
		
		if ((A*A) == (B*B) + (C*C)) printf("Retangulo: S\n");
		else if ((B*B) == (A*A) + (C*C)) printf("Retangulo: S\n");
		else if ((C*C) == (A*A) + (B*B)) printf("Retangulo: S\n");
		else printf("Retangulo: N\n");
	}
 
    return 0;
}