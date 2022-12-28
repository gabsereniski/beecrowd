//2399
#include <bits/stdc++.h>
using namespace std;

int v[52];

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    for(int i = 1; i <= n; i++)
        printf("%d\n", v[i-1] + v[i] + v[i+1]);
}