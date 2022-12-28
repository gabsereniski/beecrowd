#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    while(scanf("%d%d", &n, &k) != EOF)
    {
        vector<int> v(n);
        for(int i = 0; i < n; i++)
            scanf("%d", &v[i]);
        
        sort(v.begin(), v.end(), greater<int>());

        long long int sum = 0;
        for(int i = 0; i < k; i++)
            sum += v[i];
        
        cout << sum % 1000000007 << endl;
    }
}