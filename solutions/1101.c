//1101.c
#include <stdio.h>
int main()
{
	int M, N, i, s=0;
	scanf("%d%d",&M,&N);
	while((M>0)&&(N>0))
	{
		if(M<N)
		{
			for(i=M;i<=N;i++) 
			{
				s+=i;
				printf("%d ",i);
			}
		}
		else
		{
			for(i=N;i<=M;i++) 
			{
				s+=i;
				printf("%d ",i);
			}
		}
		printf("Sum=%d\n",s);
		s=0;
		scanf("%d%d",&M,&N);
	}
	
	return 0;
}