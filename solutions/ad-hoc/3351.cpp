#include <bits/stdc++.h>
using namespace std;

#define MAXN 100002
#define MAX 2 * 1e18

typedef vector<int> vi;
typedef long long ll;

vi a(MAXN), r(MAXN);

bool reaches_k(int n, ll k, ll t)
{
    ll total_views = 0;
    for(int i = 0; i < n; i++)
    {
        total_views += ((t - a[i]) / r[i]) + 1;
        if(total_views >= k) return true; 
    }
    return false;
}

ll binary_search(int n, ll k)
{
    ll lo = 0, hi = MAX, time = hi;

    while(lo <= hi)
    {
        ll md = (lo + hi) / 2;
        if(reaches_k(n, k, md)) hi = md - 1, time = md;
        else lo = md + 1;
    }

    return time;
}


int main()
{
    ll n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
        cin >> a[i] >> r[i];
    
    cout << binary_search(n, k) << endl;
}

/*
an = a1 + (n - 1) * r

(an - a1) / r = (n - 1)
((an - a1) / r) + 1 = n
*/