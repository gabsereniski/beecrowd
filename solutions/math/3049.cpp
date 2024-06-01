#include <bits/stdc++.h>
using namespace std;

int main()
{
    double half = (160 * 70) / 2;;

    double b, t;
    cin >> b >> t;

    double a = ((b + t) * 70) / 2;

    if(half - a == 0) cout << "0\n";
    else if(half - a < 0) cout << "1\n"; 
    else cout << "2\n";
}