//1029
#include <stdio.h>
int calls=-1;
int fib(int n)
{
	calls++;
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fib(n-1)+fib(n-2);
}

int main()
{
	int e, n, f;
	scanf("%d",&e);
	while(e--)
	{
		scanf("%d",&n);
		f = fib(n);
		printf("fib(%d) = %d calls = %d\n",n,calls,f);
		calls=-1;
	}
	
	return 0;
}