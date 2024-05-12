#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, n, c;
    int m[1001][1001];

    while((cin >> p >> n >> c) && p && n && c)
    {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < p; j++)
                cin >> m[i][j];
        
        int count = 0;

        for(int j = 0; j < p; j++)
        {
            int len = 0;
            for(int i = 0; i < n; i++)
            {
                if(m[i][j]) len++;
                else
                {
                    if(len >= c) count++;
                    len = 0;
                }
            }
            if(len >= c) count++;
        }

        cout << count << endl;
    }

}