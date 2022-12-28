#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r = 0;
    int cont = 5;

    double menor = 11, maior = 4;

    while(cont--)
    {
        double a;
        scanf("%lf", &a);
        menor = min(menor, a);
        maior = max(maior, a);
        r += a;
    }

    printf("%.1f\n", r - menor - maior);

    return 0;
}
