#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int tab[n][n];

    for(int i = 0; i < n; i++)
        cin >> tab[0][i];
    
    int r = n-1;

    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < r; j++)
        {
            if(tab[i-1][j] == tab[i-1][j+1])
                tab[i][j] = 1;
            else tab[i][j] = -1;

        }

        r--;
    }


    tab[n-1][0] == -1 ? cout << "branca\n" : cout << "preta\n";
}