#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> jogo;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;
        jogo.insert(n);
    }

    int pts = 0;

    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;

        if (jogo.count(n))
            pts++;
    }

    string res[] = {"azar",
                    "azar",
                    "azar",
                    "terno",
                    "quadra",
                    "quina",
                    "sena"};

    cout << res[pts] << endl;
}