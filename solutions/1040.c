#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, ne, m, me;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	m = (n1*2 + n2*3 + n3*4 + n4)/10;
	printf("Media: %.1f\n", m);
	if (m>=7)
	{
		printf("Aluno aprovado.\n");
	}
	else if ((m>=5)&&(m<7.0))
	{
		printf("Aluno em exame.\n");
		scanf("%f", &ne);
		printf("Nota do exame: %.1f\n", ne);
		me = (m+ne)/2.0;
		if (me>=5.0)
		{
			printf("Aluno aprovado.\n");
		}
		else
		{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1f\n", me);
	}
	else
	{
		printf("Aluno reprovado.\n");
	}
 
    return 0;
}