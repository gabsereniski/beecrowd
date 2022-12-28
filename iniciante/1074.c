#include <stdio.h>
 
int main() {
 
    int N, a, i;
	scanf("%d",&N);
	if(N<10000)
	{
		for(i=1;i<=N;i++)
		{
			scanf("%d",&a);
			if (a)
			{
				if (a%2==0) printf("EVEN ");
				else printf("ODD ");
				if (a>0) printf("POSITIVE\n");
				else printf("NEGATIVE\n");
			}
			else printf("NULL\n");
		}
	}
 
    return 0;
}