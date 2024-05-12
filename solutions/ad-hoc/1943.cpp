#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;

    cin >> k;

    cout << "Top ";
    if(k <= 1) cout << "1";
    else if(k <= 3) cout << "3";
    else if(k <= 5) cout << "5";
    else if(k <= 10) cout << "10";
    else if(k <= 25) cout << "25";
    else if(k <= 50) cout << "50";
    else if(k <= 100) cout << "100";
    cout << endl;
}