#include <stdio.h>
#include <math.h>

int main()
{
	float A, B, C, D, R1, R2;
	scanf ("%f %f %f", &A, &B, &C);
	if (!A)
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		D = B*B - 4*A*C;
		if (D<0)
		{
			printf("Impossivel calcular\n");
		}
		else
		{
			R1 = (-B + sqrtf(D))/(2.0*A);
			R2 = (-B - sqrtf(D))/(2.0*A);
			printf("R1 = %.5f\nR2 = %.5f\n", R1, R2);
		}
	}
	
	return 0;
}