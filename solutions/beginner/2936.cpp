#include <bits/stdc++.h>
using namespace std;
// 2936

int main()
{
    int p[] = {300, 1500, 600, 1000, 150};

    int x, m = 225;

    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        m += x * p[i];
    }

    printf("%d\n", m);
    
}