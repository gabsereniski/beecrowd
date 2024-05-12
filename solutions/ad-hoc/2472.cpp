#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, n;

    cin >> l >> n;

    long long maior = l - (n - 1);

    cout << (maior * maior) + (n - 1) << endl;
}
