//1185.c
#include <stdio.h>
#define max 12
int main()
{
	float m[max][max], soma, k=1;
	int i, j;
	char op;
	
	scanf(" %c",&op);
	
	for(i=0;i<max;i++)
		for(j=0;j<max;j++)
			scanf("%f",&m[i][j]);
	//soma
	for(i=1;i<max;i++,k++)
		for(j=max-k;j<max;j++)
			soma+=m[i][j];
	
	switch(op)
	{
		case 'S': printf("%.1f\n",soma); break;
		case 'M': printf("%.1f\n",soma/((max*max/2)-max/2)); break;
	}
	
	return 0;
}