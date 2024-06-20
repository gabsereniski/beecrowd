#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main()
{
    int n;
    while(cin >> n)
    {
        int cost;
        cin >> cost;

        vi profit(n);

        for(int i = 0; i < n; i++)
            cin >> profit[i], profit[i] -= cost;
        
        int best = 0, curr = 0;
        for(int i = 0; i < n; i++)
        {
            curr += profit[i];
            best = max(best, curr);

            if(curr < 0) curr = 0;
        }

        cout << best << endl;
    }
}
