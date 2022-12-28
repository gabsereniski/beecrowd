//1192
#include <stdio.h>
#include <ctype.h>
int main()
{
	int e;
	char a, b, op;
	scanf("%d",&e);
	while(e--)
	{
		scanf ("%hhd %c %hhd",&a,&op,&b);
		if(a==b)
			printf("%hhd\n",a*b);
		else if( islower(op) )
			printf("%hhd\n",a+b);
		else if( !islower(op) )
			printf("%hhd\n",b-a);
	}
	
	return 0;
}