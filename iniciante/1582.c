//1582
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void sort(int v[], int len)
{
	int i, j, tmp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-i-1;j++)
			if(v[j]<v[j+1])
			{
				tmp=v[j];
				v[j]=v[j+1];
				v[j+1]=tmp;
			}
}
int mdc(int a, int b, int c)
{
	int aux;
	while(a)
	{
		aux=a;
		a=b%a;
		b=aux;
	}
	while(b)
	{
		aux=b;
		b=c%b;
		c=aux;
	}
	return c;
}

int main()
{
	int a, b, c, m, n, o, div;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		int v[3]={a,b,c};
		sort(v,3);
		div = mdc(v[0],v[1],v[2]);
		if(pow(v[0],2) == pow(v[1],2) + pow(v[2],2) && div == 1)
			printf("tripla pitagorica primitiva\n");
		else if(pow(v[0],2) == pow(v[1],2) + pow(v[2],2) && div != 1)
			printf("tripla pitagorica\n");
		else
			printf("tripla\n");
	}
	
	return 0;
}