#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
#define MAXN 200020
#define mid(l, r) ((l + r) >> 1)
#define left(x)   ((x << 1) + 1)
#define right(x)  ((x << 1) + 2)

int n, b;

vi v(MAXN);
vi min_t(4*MAXN);
vi max_t(4*MAXN);
vi prefix(MAXN, 0);

void _build_min(int i, int tl, int tr)
{
    if(tl == tr) min_t[i] = v[tl];
    else
    {
        int tm = mid(tl, tr);
        _build_min(left(i), tl, tm);
        _build_min(right(i), tm + 1, tr);
        min_t[i] = min(min_t[left(i)], min_t[right(i)]);
    }
}

int _min_query(int i, int tl, int tr, int l, int r)
{
    if(l > r) return INT_MAX;
    if(l == tl && r == tr) return min_t[i];
    int tm = mid(tl, tr);
    int min_l = _min_query(left(i), tl, tm, l, min(tm, r));
    int min_r = _min_query(right(i), tm + 1, tr, max(l, tm + 1), r);
    return min(min_l, min_r);
}

void _build_max(int i, int tl, int tr)
{
    if(tl == tr) max_t[i] = v[tl];
    else
    {
        int tm = mid(tl, tr);
        _build_max(left(i), tl, tm);
        _build_max(right(i), tm + 1, tr);
        max_t[i] = max(max_t[left(i)], max_t[right(i)]);
    }
}

int _max_query(int i, int tl, int tr, int l, int r)
{
    if(l > r) return INT_MIN;
    if(l == tl && r == tr) return max_t[i];
    int tm = mid(tl, tr);
    int max_l = _max_query(left(i), tl, tm, l, min(tm, r));
    int max_r = _max_query(right(i), tm + 1, tr, max(l, tm + 1), r);
    return max(max_l, max_r);
}

void build()
{
    _build_min(1, 0, n - 1);
    _build_max(1, 0, n - 1);
}

int query(int l, int r)
{
    return _min_query(1, 0, n - 1, l, r) + 
           _max_query(1, 0, n - 1, l, r);
}

ll prefix_query(int l, int r)
{
    return prefix[r + 1] - prefix[l];
}

ll get_grade(int b)
{
    ll grade = 0;
    for(int i = 0; i <= n - b; i++)
    {
        int l = i, r = i + b - 1;
        int min_max = query(l, r);
        ll total_sum = prefix_query(l, r);
        grade += total_sum - min_max;
    }

    return grade;
}

int main()
{
    while(scanf("%d %d", &n, &b) != EOF)
    {
        prefix[0] = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &v[i]);
            prefix[i + 1] = prefix[i] + v[i];
        }

        build();
        printf("%lld\n", get_grade(b));
    }

}
