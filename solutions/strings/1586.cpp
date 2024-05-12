// 1586.cpp
#include <bits/stdc++.h>
using namespace std;

string s[100001];
long long pwr[100001];
int n;

long long A_pwr(int m)
{
    long long sum = 0;
    for (int i = m, p = 1; i >= 0; i--, p++)
        sum += pwr[i] * p;

    return sum;
}

long long B_pwr(int m)
{
    long long sum = 0;
    for (int i = m + 1, p = 1; i < n; i++, p++)
        sum += pwr[i] * p;

    return sum;
}

int main()
{
    while ((cin >> n) && n)
    {
        for (int i = 0; i < n; i++)
        {
            long long p = 0;
            cin >> s[i];
            for (int j = 0; j < s[i].size(); j++)
                p += s[i][j];
            pwr[i] = p;
        }

        int l = 0, r = n - 1;
        int est = -1, m;

        while (l <= r)
        {
            m = (l + r) / 2;
            if (A_pwr(m) == B_pwr(m))
            {
                est = m;
                break;
            }
            else if (A_pwr(m) < B_pwr(m)) l = m + 1;
            else if (A_pwr(m) > B_pwr(m)) r = m - 1;
        }

        if (est == -1) cout << "Impossibilidade de empate.\n";
        else cout << s[est] << endl;
    }
}