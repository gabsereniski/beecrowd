//1134.c
#include <stdio.h>
int main()
{
	int c, ca=0, cg=0, cd=0;
	scanf("%d",&c);
	while (c!=4)
	{
		switch(c)
		{
			case 1: ca++; break;
			case 2: cg++; break;
			case 3: cd++; break;
			default: break;
		}
		scanf("%d",&c);
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",ca,cg,cd);
	
	return 0;
}