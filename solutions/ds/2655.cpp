#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define BITS 51

#define mid(l, r) ((l + r) / 2)
#define left(x) (2 * x + 1)
#define right(x) (2 * x + 2)

typedef long long ll;
typedef vector<int> vi;
typedef bitset<BITS> bs;
typedef vector<bs> vbs;

int n;
vbs st(4 * MAXN, bs(0));
vbs v(MAXN, bs(0));

void _build(int i, int tl, int tr)
{
    if(tl == tr) st[i] = v[tl];
    else
    {
        int tm = mid(tl, tr);
        _build(left(i), tl, tm);
        _build(right(i), tm + 1, tr);
        st[i] = st[left(i)] | st[right(i)];
    }
}

void _update(int i, int tl, int tr, int pos, bs new_val)
{
    if(pos < tl || pos > tr) return;

    if(tl == pos && tr == pos) 
    {
        v[pos] = new_val;
        st[i] = v[pos];
    }

    else
    {
        int tm = mid(tl, tr);
        _update(left(i), tl, tm, pos, new_val);
        _update(right(i), tm + 1, tr, pos, new_val);
        st[i] = st[left(i)] | st[right(i)];
    }
}

bs _count(int i, int tl, int tr, int l, int r) 
{
    if(l > r) return bs(0);
    if(l == tl && r == tr) return st[i];
    int tm = mid(tl, tr);
    return _count(left(i), tl, tm, l, min(tm, r)) |
           _count(right(i), tm + 1, tr, max(l, tm + 1), r);
}

void build()
{
    _build(1, 1, n);
}

void update(int position, int new_val)
{
    bs new_b = 0; new_b.set(new_val);
    _update(1, 1, n, position, new_b);
}

int count(int l, int r)
{
    bs bits = _count(1, 1, n, l, r);
    return bits.count();
}


int main()
{
    int q, m;
    cin >> n >> q >> m;

    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i].set(x);
    }

    build();

    while(q--)
    {
        int op;
        cin >> op;

        if(op == 1)
        {
            int l, r;
            cin >> l >> r;
            cout << count(l, r) << endl;
        }

        else if(op == 2)
        {
            int c, t;
            cin >> c >> t;
            update(c, t);
        }
    }
}