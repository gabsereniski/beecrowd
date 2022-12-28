#include <stdio.h>
 
int main() {
 
    int a, b, c, m;
	scanf("%d%d%d", &a, &b, &c);
	m = a;
	if (b>m)
		m = b;
	if (c>m)
		m = c;
	printf("%d eh o maior\n", m);
 
    return 0;
}