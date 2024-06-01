#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, k;
    cin >> n >> k;

    ll count = 0, sum = 0;
    unordered_map<ll, ll> h;
    h[0] = 1;
     
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        if(h.count(sum - k)) count += h[sum - k];

        h[sum] += 1;
    }

    cout << count << endl;
}