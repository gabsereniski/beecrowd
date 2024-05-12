#include <bits/stdc++.h>
using namespace std;

// fila

int main()
{
    int n;
    while ((cin >> n) && n)
    {
        stack<char> s;
        s.push(0);
        char out[n+1], in[n+1];

        for (int i = 0; i < n; i++)
            cin >> in[i];

        for( int i = 0; i < n; i++)
            cin >> out[i];

        int i = 0, j = 0;

        while (i < n)
        {
            s.push(in[i++]);
            cout << 'I';

            if (s.top() == out[j])
            {
                while (j < n && s.top() == out[j])
                {
                    cout << 'R';
                    s.pop();
                    j++;
                }
            }
        }

        while (j < n && s.top() == out[j])
        {
            cout << 'R';
            s.pop(), j++;
        }

        s.top() ? cout << " Impossible\n" : cout << "\n";
    }
}