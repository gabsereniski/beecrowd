#include <bits/stdc++.h>
using namespace std;
// 2388

int main()
{
    int n;
    cin >> n;
    

    int d = 0;
    
    while(n--)
    {
        int t, v;
        cin >> t >> v;

        d += t * v;
    }

    printf("%d\n", d);
    
}