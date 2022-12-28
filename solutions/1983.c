//1983.c
#include <stdio.h>
int main()
{
	int i[100], e, j, p;
	float n[100], maior;
	scanf("%d",&e);
	for(j=0;j<e;j++)
		scanf("%d%f",&i[j],&n[j]);
	maior=n[0];
	p=i[0];
	for(j=1;j<e;j++)
	{
		if(n[j]>maior)
		{
			maior=n[j];
			p=i[j];
		}
	}
	if(maior<8)
		printf("Minimum note not reached\n");
	else
		printf("%d\n",p);
	
	return 0;
}