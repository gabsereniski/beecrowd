//1541.c
#include <stdio.h>
#include <math.h>
int main()
{
	int A, B, C;
	float Ar, D, L, R;
	scanf("%d%d%d",&A,&B,&C);
	while(A)
	{
		D=C/100.0;
		Ar=A*B;
		R=Ar/C;
		L=sqrt(R)*10;
		printf("%d\n",(int)L);
		scanf("%d",&A);
		if(A==0) break;
		scanf("%d%d",&B,&C);
	}
	
	return 0;
}