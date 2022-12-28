//1188
#include <stdio.h>
#define m 12
int main()
{
	char op;
	int i, j, x=5;
	float soma=0, n;
	scanf(" %c",&op);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%f",&n);
			if(j>x&&j<11-x)
				soma+=n;
		}
		if(i>5)
			x--;
	}
	
	switch(op)
	{
		case 'S': printf("%.1f\n",soma); break;
		case 'M': printf("%.1f\n",soma/30);
	}
	
	return 0;
}