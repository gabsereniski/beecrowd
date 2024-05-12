//2248
#include <stdio.h>
#define N 20000
int main()
{
	int n, t=0;
	while(scanf("%d",&n),n)
	{
		int id[N] = {}, nota[N] = {}, i, maior=-1;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&id[i],&nota[i]);
			if(nota[i]>maior)
				maior = nota[i];
		}
		
		printf("Turma %d\n",++t);
		
		for(i=0;i<n;i++)
		{
			if(nota[i] == maior)
				printf("%d ",id[i]);
		}
		
		printf("\n\n");
		
	}
	
	return 0;
}