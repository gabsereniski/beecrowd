//1301
#include <bits/stdc++.h>
using namespace std;
#define MAX 100002

int st[4*MAX];
int v[MAX];

void build(int node, int b, int e)
{
    if(b == e) st[node] = v[b];
    else
    {
        int mid = (b + e)/2;
        int l = 2*node, r = 2*node + 1;

        build(l, b, mid);
        build(r, mid + 1, e);

        st[node] = st[l] * st[r];
    }
}

void update(int node, int b, int e, int i)
{
    if(b > i || e < i) return;
    if(b == e) st[node] = v[i];

    else
    {
        int mid = (b + e)/2;
        int l = 2*node, r = 2*node + 1;

        update(l, b, mid, i);
        update(r, mid + 1, e, i);

        st[node] = st[l] * st[r];
    }
}

int query(int node, int b, int e, int i, int j)
{
    if(b > j || e < i)
        return 1;
    if(b >= i && e <= j)
        return st[node];

    int l = node * 2, r = node * 2 + 1;

    return query(l, b, (b + e)/2, i, j) *
           query(r, (b + e)/2 + 1, e, i, j);
}

int main()
{
    int n, k;
    while(cin >> n >> k)
    {
        for(int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if(a == 0) v[i] = 0;
            else if(a > 0) v[i] = 1;
            else v[i] = -1;
        }

        build(1, 0, n-1);

        while(k--)
        {
            char q;
            int i, j;
            cin >> q >> i >> j;

            if(q == 'C')
            {
                i--;
                if(j == 0) v[i] = 0;
                else if(j > 0) v[i] = 1;
                else v[i] = -1;

                update(1, 0, n - 1, i);
            }

            else
            {
                i--, j--;
                int ans = query(1, 0, n-1, i, j);

                if(ans == 0) cout << 0;
                else if(ans == 1) cout << '+';
                else cout << '-';
            }
        }
        cout << endl;
    }
}