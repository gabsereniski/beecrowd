//2391
#include <bits/stdc++.h>
using namespace std;

int v[100000], n;

int main()
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    if(n == 1) return !printf("1\n");

    int resp = 1, atual = v[1] - v[0];

    for(int i = 2; i < n; i++)
    {
        if(v[i] - v[i-1] != atual)
        {
            atual = v[i+1] - v[i];
            resp++;
        }
    }

    printf("%d\n", resp);

    return 0;
}