#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;

int main()
{
    int n = 100000;
    long long k = 100000000000000;

    printf("%d %lld\n", n, k);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);
    while (n--)
    {
        printf("%d %d\n", distrib(gen), distrib(gen));
    }
}