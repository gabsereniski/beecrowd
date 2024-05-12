#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;

    cin >> n >> s;

    int menor = s;

    while(n--)
    {
        int x;
        cin >> x;

        s += x;

        if(s < menor) menor = s;
    }

    cout << menor << endl;
}