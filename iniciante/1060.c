#include <stdio.h>
 
int main() {
 
    float n;
	int i, c=0;
	for (i=1;i<=6;i++)
	{
		scanf("%f",&n);
		if(n>0.0) c++;
	}
	printf("%d valores positivos\n", c);
 
    return 0;
}