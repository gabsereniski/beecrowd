#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
    {
        vector<string> t(n);

        for(int i = 0; i < n; i++)
            cin >> t[i];

        sort(t.begin(), t.end());

        int len = t[0].length();
        int saved = 0;

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j < len; j++)
            {
                if(t[i][j] == t[i-1][j]) saved++;
                else break;
            }
        }

        cout << saved << endl;
    }
}