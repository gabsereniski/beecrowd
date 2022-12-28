#include <stdio.h>

int main()
{
	float s;
	scanf("%f", &s);
	if (s<=400.00) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", s+(s*0.15), s*0.15);
	else if ((s>400.00)&&(s<=800.0)) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", s+(s*0.12), s*0.12);
	else if ((s>800.0)&&(s<=1200.0)) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", s+(s*0.10), s*0.10);
	else if ((s>1200.0)&&(s<=2000.0)) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", s+(s*0.07), s*0.07);
	else printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", s+(s*0.04), s*0.04);
	
	return 0;
}