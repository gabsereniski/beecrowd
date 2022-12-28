#include <stdio.h>
 
int main() {
 
    int X, Y;
	float P;
	scanf("%d %d", &X, &Y);
	
	switch(X)
	{
		case 1:
			P = Y*4.00;
			break;
		case 2:
			P = Y*4.50;
			break;
		case 3:
			P = Y*5.00;
			break;
		case 4:
			P = Y*2.00;
			break;
		case 5:
			P = Y*1.50;
			break;
	}
	
	printf("Total: R$ %.2f\n", P);
 
    return 0;
}