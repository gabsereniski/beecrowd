#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> c(n+2, string(m+2, '#'));
    c[n+1] = string(m+2, '.');

    for (int i = 1; i <= n; i++)
    {
        string row;
        cin >> row;
        for(int j = 1; j <= m; j++)
            c[i][j] = row[j-1];
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(c[i][j] == '.')
            {
                if(c[i-1][j] == 'o') c[i][j] = 'o';
                if(c[i][j-1] == 'o' && c[i+1][j-1] == '#') c[i][j] = 'o';
                if(c[i][j+1] == 'o' && c[i+1][j+1] == '#') c[i][j] = 'o';
            }
        }

        for(int j = m; j > 0; j--)
        {
            if(c[i][j] == '.')
            {
                if(c[i-1][j] == 'o') c[i][j] = 'o';
                if(c[i][j-1] == 'o' && c[i+1][j-1] == '#') c[i][j] = 'o';
                if(c[i][j+1] == 'o' && c[i+1][j+1] == '#') c[i][j] = 'o';
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << c[i][j];
        cout << endl;
    }
}
