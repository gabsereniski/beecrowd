//1171
#include <stdio.h>
int main()
{
	int base[2001]={}, e, n, i, maior=-1, menor=2002;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d",&n);
		base[n]+=1;
		if(n>maior)
			maior=n;
		if(n<menor)
			menor=n;
	}
	
	for(i=menor;i<=maior;i++)
	{
		if(base[i])
			printf("%d aparece %d vez(es)\n",i,base[i]);
	}
	
	return 0;
}