#include <stdio.h>
 
int main() {
 
    int N, i;
	float a, b, c, m;
	scanf("%d", &N);
	for(i=1;i<=N;i++)
	{
		scanf("%f%f%f",&a,&b,&c);
		m = a*0.2 + b*0.3 + c*0.5;
		printf("%.1f\n",m);
	}
 
    return 0;
}