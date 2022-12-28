//2310
#include <stdio.h>
int main()
{
	char nome[100];
	int n, i, s, s1, b, b1, a, a1;
	int ss=0, ss1=0, sb=0, sb1=0, sa=0, sa1=0;
	double ps, pb, pa;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",nome);
		scanf("%d%d%d",&s,&b,&a);
		ss+=s; sb+=b; sa+=a;
		scanf("%d%d%d",&s1,&b1,&a1);
		ss1+=s1; sb1+=b1; sa1+=a1;
	}
	ps=((double)ss1*100)/ss;
	pb=((double)sb1*100)/sb;
	pa=((double)sa1*100)/sa;

	printf("Pontos de Saque: %.2lf %%.\n",ps);
	printf("Pontos de Bloqueio: %.2lf %%.\n",pb);
	printf("Pontos de Ataque: %.2lf %%.\n",pa);

	return 0;
}