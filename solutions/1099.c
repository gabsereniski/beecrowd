#include <stdio.h>
 
int main() {
 
    int N, X, Y, i, j, s=0;
	scanf("%d", &N);
	for(i=1;i<=N;i++)
	{
		scanf("%d%d", &X, &Y);
		if(X<Y)
		{
			for(j=X+1;j<Y;j++)
			{
				if(j%2!=0) s+=j;
			}
		}
		else
		{
			for(j=Y+1;j<X;j++)
			{
				if(j%2!=0) s+=j;
			}
		}
		printf("%d\n",s);
		s=0;
	}
 
    return 0;
}