#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double cost = INT_MAX;

    while(n--)
    {
        double p, g;
        cin >> p >> g;
        cost = min(cost, p * (1000 / g));
    }

    printf("%.2lf\n", cost);
}