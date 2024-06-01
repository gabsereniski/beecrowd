#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long p = pow(2, n);
    cout << (p + 1) * (p + 1) << '\n';
}