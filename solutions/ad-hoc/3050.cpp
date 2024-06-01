#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// maxd = p[i] + p[j] + (j - i)
// maxp = max(p[i] - i)
// maxd = p[j] + j + maxp

int main()
{
    int n;
    cin >> n;

    ll maxp = 0;
    ll maxd = 0;

    for(int j = 1; j <= n; j++)
    {
        ll p;
        cin >> p;

        maxd = max(maxd, p + j + maxp);

        maxp = max(maxp, p - j);
    }

    cout << maxd << endl;
}
