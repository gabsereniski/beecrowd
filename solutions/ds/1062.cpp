#include <bits/stdc++.h>
using namespace std;

// fila

int main()
{
    int n;
    while ((cin >> n) && n)
    {
        while (true)
        {
            stack<int> s;
            s.push(0);
            int out[n];
            int i;
            for (i = 0; i < n; i++)
            {
                cin >> out[i];
                if (!out[i])
                    break;
            }

            if (i < n)
            {
                cout << endl;
                break;
            }

            int in = 1;
            i = 0;

            while (in <= n)
            {
                s.push(in);

                // printf(">> in %d out %d top %d\n", in, out[i], s.top());
                if (in == out[i])
                {
                    while (s.top() == out[i])
                    {
                        // printf(">>>> out %d top %d\n", out[i], s.top());
                        s.pop();
                        i++;
                    }
                    in++;
                }
                else
                    in++;
            }

            while (s.top() == out[i])
            {
                // printf(">>>>>> out %d top %d\n", out[i], s.top());
                s.pop(), i++;
            }

            s.top() == 0 ? cout << "Yes\n" : cout << "No\n";
        }
    }
}
