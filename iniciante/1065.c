#include <stdio.h>
 
int main() {
 
    int n, i, c=0;
	for (i=1;i<=5;i++)
	{
		scanf("%d", &n);
		if (n%2==0) c++;
	}
	printf ("%d valores pares\n", c);
 
    return 0;
}