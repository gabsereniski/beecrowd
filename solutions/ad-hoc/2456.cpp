#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> c(5);

    for(int i = 0; i < 5; i++)
        cin >> c[i];

    vector<int> c_sort = c;
    sort(c_sort.begin(), c_sort.end());

    vector<int> c_dec = c_sort;
    reverse(c_dec.begin(), c_dec.end());

    if(c == c_sort) cout << "C\n";
    else if(c == c_dec) cout << "D\n";
    else cout << "N\n";
}