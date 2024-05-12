#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char tab[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> tab[i][j];

    int food = 0, max_food = 0;

    for (int i = 0; i < n; i++)
    {
        if (!(i % 2))
        {
            for (int j = 0; j < n; j++)
            {
                if (tab[i][j] == 'o')
                {
                    food++;
                    if (food > max_food)
                        max_food = food;
                }

                if (tab[i][j] == 'A')
                    food = 0;
            }
        }

        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (tab[i][j] == 'o')
                {
                    food++;
                    if (food > max_food)
                        max_food = food;
                }

                if (tab[i][j] == 'A')
                    food = 0;
            }
        }
    }

    cout << max_food << endl;
}