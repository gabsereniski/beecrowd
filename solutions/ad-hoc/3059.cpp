#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, I, F;
    cin >> n >> I >> F;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] + v[j] >= I && v[i] + v[j] <= F)
                count++;

    cout << count << endl;
}