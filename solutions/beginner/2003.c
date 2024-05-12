#include <stdio.h>
int main()
{
	int h, m, a;
	while(scanf("%d:%d",&h,&m)!=EOF)
	{
		if(h<7)
			a=0;
		else if(h==7 && m==0)
			a=0;
		else if(h==7 && m>0)
			a=m;
		else if(h==9)
			a=120;
		else
			a=60+m;
		printf("Atraso maximo: %d\n",a);
	}
	
	return 0;
}