#include <stdio.h>
 
int main() {
 
   int n, i, m = 0, p = 0;
	for(i=1;i<=100;i++)
	{
		scanf("%d",&n);
		if(n>m)
		{
			m = n;
			p = i;
		}
	}
	printf("%d\n%d\n", m, p);
 
    return 0;
}