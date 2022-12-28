#include <stdio.h>
 
int main() {
 
    int i, c=0;
	float m, n, s=0.0;
	for (i=1;i<=6;i++)
	{
		scanf("%f", &n);
		if (n>0.0) 
		{
			c++;
			s+=n;
		}
	}
	m = s/c;
	
	printf("%d valores positivos\n%.1f\n",c,m);
 
    return 0;
}