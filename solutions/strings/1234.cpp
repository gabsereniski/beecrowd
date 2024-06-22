#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s, '\n'))
    {
        bool up = true;
        int len = s.size();

        for (int i = 0; i < len; i++)
        {
            if (isalpha(s[i]))
            {
                up ? cout << (char)toupper(s[i]) : cout << (char)tolower(s[i]);
                up = !up;
            }

            else
                cout << s[i];
        }

        cout << endl;
    }
}
