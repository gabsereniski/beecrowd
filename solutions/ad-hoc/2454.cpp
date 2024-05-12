#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, r;

    cin >> p >> r;

    if(p && r) cout << "A\n";
    else if(p && !r) cout << "B\n";
    else cout << "C\n";
}