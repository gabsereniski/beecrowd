#include <stdio.h>
 
int main() {
 
    float S, I1, I2, I3;
	scanf("%f",&S);
	if ((S>0.0)&&(S<=2000.0)) printf("Isento\n");
	else if((S>2000.01)&&(S<=3000.0)) 
	{
		S-=2000.0;
		printf("R$ %.2f\n",S*0.08);
	}
	else if((S>3000.01)&&(S<=4500.0)) 
	{
		S-=2000.0;
		I1 = 1000.0;
		I2 = S-1000.0;
		printf("R$ %.2f\n", (I1*0.08)+(I2*0.18));
	}
	else
	{
		S-=2000.0;
		I1 = 1000.0;
		I2 = 1500.0;
		I3 = S-2500.0;
		printf("R$ %.2f\n", (I1*0.08)+(I2*0.18)+(I3*0.28));
	}
 
    return 0;
}