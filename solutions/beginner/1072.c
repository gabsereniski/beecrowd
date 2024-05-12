#include <stdio.h>
 
int main() {
 
    int en, n, i, ni=0, nf=0;
	scanf("%d", &en);
	for(i=1;i<=en;i++)
	{
		scanf("%d", &n);
		if ((n>=10)&&(n<=20)) ni++;
		else nf++;
	}
	printf("%d in\n%d out\n",ni,nf);
 
    return 0;
}