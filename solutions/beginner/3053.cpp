#include <bits/stdc++.h>
using namespace std;

bool game[3] = {};

int main()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    game[c - 'A'] = true;

    while(n--)
    {
        int m;
        cin >> m;

        switch(m)
        {
            case 1: swap(game[0], game[1]); break;
            case 2: swap(game[1], game[2]); break;
            case 3: swap(game[0], game[2]); break;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        char r = 'A';
        if(game[i]) cout << (char)(i + r) << endl;
    }
}   