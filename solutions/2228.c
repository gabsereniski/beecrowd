#include <stdio.h>
#define max 100

int irmao,irmao2,arc,tesouro[max],i,soma=0,ts=0,possivel;


int subset_sum(int *v, int n, int x)
{

    int poss[5500] = {};
    int i, j;

    poss[0] = 1;

    for(i = 0; i < n; i++)
    {
        for(j = x; j >= v[i]; j--)
        {
            if(poss[j-v[i]])
                poss[j] = 1;
        }
    }
    return poss[x];

}



int main()
{

	while (scanf("%d %d %d", &irmao, &irmao2, &arc) && irmao && irmao2 && arc)
	{
		for(i=0;i<arc;i++)
		{
			scanf("%d", &tesouro[i]);
			soma+=tesouro[i];
		}
		soma += irmao+irmao2;


		printf("Teste %d\n",++ts);

		if(soma%2!=0)
			printf("N\n\n");

		else
		{
			soma/=2;
			if(irmao>irmao2)
				soma-=irmao2;

			else
				soma-=irmao;

			possivel = subset_sum(tesouro,arc,soma);

			if(possivel)
				printf("S\n\n");
			else if(!possivel)
				printf("N\n\n");
		}
		soma=0;
	}
	return 0;
}
