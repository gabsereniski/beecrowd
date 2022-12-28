//1181.c
#include <stdio.h>
#define max 12
int main()
{
	float m[max][max], soma;
	int i, j, l;
	char op;

	
	scanf("%d %c",&l,&op);
	
	for(i=0;i<max;i++)
		for(j=0;j<max;j++)
			scanf("%f",&m[i][j]);
	//soma
	for(i=l,j=0;j<max;j++)
		soma+=m[i][j];
	
	switch(op)
	{
		case 'S': printf("%.1f\n",soma); break;
		case 'M': printf("%.1f\n",soma/max); break;
	}
	
	return 0;
}