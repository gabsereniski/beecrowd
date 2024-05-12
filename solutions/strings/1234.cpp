#include <bits/stdc++.h>
using namespace std;

int main()
{
      string s;

      while(getline(cin, s))
      {
            int last = 0;
            for(int i = 0; i < s.size(); i++)
            {
                  if(isalpha(s[i]))
                  {
                        if(last == 0)
                        {
                              s[i] = toupper(s[i]);
                              last = 1;
                        }
                        else
                        {
                              s[i] = tolower(s[i]);
                              last = 0;
                        }
                  }
            }
            cout << s << endl;
      }
}