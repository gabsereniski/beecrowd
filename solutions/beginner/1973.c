//1973
#include <stdio.h>
int main()
{
	long long int e, i;
	scanf("%lld",&e);
	long long int estrela[e], ovelha[e], estrelar=0, somao=0;
	for(i=0;i<e;i++)
	{
		scanf("%lld",&ovelha[i]);
		estrela[i]=0;
	}
	i=0;
	while(1)
	{
		if(i==0 && !(ovelha[i]%2))
		{
			estrela[i]=1;
			if(ovelha[i])
				ovelha[i]--;
			break;
		}
		else if(i==e-1 && ovelha[i]%2)
		{
			estrela[i]=1;
			if(ovelha[i])
				ovelha[i]--;
			break;
		}
		else if(ovelha[i]%2)
		{
			ovelha[i]--;
			estrela[i]=1;
			i++;
		}
		else if(!(ovelha[i]%2))
		{
			estrela[i]=1;
			if(ovelha[i])
				ovelha[i]--;
			i--;
		}
	}
	for(i=0;i<e;i++)
	{
		somao+=ovelha[i];
		estrelar+=estrela[i];
	}
	printf("%lld %lld\n",estrelar,somao);
	
	return 0;
}