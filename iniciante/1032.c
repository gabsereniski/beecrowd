//1032
#include <stdio.h>
#include <string.h>

int prime[3502];

int flavious(int n)
{
    int i, r = 0;
    for (i = 1; i <= n; i++)
        r = (r + prime[n-i]) % i;
  
    return r;
}

int isPrime(int n)
{ 
    int i;
    
    if(n == 2) return 1;
    
    if(n%2 == 0) return 0;
    
    for(i = 3; i*i <= n; i += 2)
        if(!(n % i)) return 0;
    
    return 1;
}

void primeNumbers()
{
    memset(&prime, 0, sizeof(prime));
    int j;
    int a = 0;
    for(j = 2; j < 32650; j++)
    {
        if(isPrime(j))
        {
			prime[a] = j;
            a++;
        }
    }
}

int main()
{
    primeNumbers();

	int n;
    while(scanf("%d",&n), n)
        printf("%d\n", flavious(n) + 1);
    
    return 0;
}