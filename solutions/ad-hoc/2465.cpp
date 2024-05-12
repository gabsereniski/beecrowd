#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int>> vvi;

void floodfill(vvi tab, vvi &up, int x, int y)
{
    int my[] = {1, 0, -1, 0};
    int mx[] = {0, 1, 0, -1};
        
    for(int i = 0; i < 4; i++)
    {
        int yy = y + my[i];
        int xx = x + mx[i];

        if(tab[yy][xx] >= tab[y][x] && !up[yy][xx])
        {   
            up[yy][xx] = 1;
            floodfill(tab, up, xx, yy);
        }
    }
}

int main()
{
    int n, y, x;

    cin >> n >> y >> x;

    vvi tab(n+2, vector<int>(n+2, 0));
    vvi up(n+2, vector<int>(n+2, 0));


    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> tab[i][j];
    
    up[y][x] = 1;

    floodfill(tab, up, x, y);

    int total = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= n; j++)
            total += up[i][j];
    
    cout << total << endl;
}