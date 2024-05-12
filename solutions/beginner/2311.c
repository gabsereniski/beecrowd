//2311
#include <stdio.h>
int main()
{
	int e, i;
	char nome[100];
	scanf("%d",&e);
	while(e--)
	{
		double peso, pt=0.0, maior=-1.0, menor=101.0, n;
		scanf("%s",nome);
		scanf("%lf",&peso);
		for(i=0;i<7;i++)
		{
			scanf("%lf",&n);
			if(n>maior)
				maior=n;
			if(n<menor)
				menor=n;
			pt+=n;
		}
		pt-=(menor+maior);
		pt*=peso;
		printf("%s %.2lf\n",nome,pt);
	}	
	
	return 0;
}