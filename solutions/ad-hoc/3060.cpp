#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, p;
    cin >> v >> p;

    int r = v % p;

    for(int i = 0; i < p; i++)
        cout << (v / p) + (i < r) << endl;
}