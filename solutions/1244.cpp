#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    
    while(n--)
    {
        string line;
        getline(cin, line);   
        stringstream s(line);
        string word;

        vector<string> v;

        while(getline(s, word, ' '))
            v.push_back(word);

        stable_sort(v.begin(), v.end(), [](string a, string b) {
            return a.size() > b.size();
        });

        for(int i = 0; i < v.size(); i++){
            cout << v[i];
            if(i < v.size() - 1) cout << ' ';
            else                 cout << endl;
        }
    }
}