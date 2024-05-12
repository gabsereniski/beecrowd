#include <bits/stdc++.h>
using namespace std;

struct medalha{
    int ouro;
    int prata;
    int bronze;
    string pais;
};

void printm(medalha m){
    cout << m.pais << " " << m.ouro << " " << m.prata << " " << m.bronze << endl;
}


int main()
{
    int n;
    scanf("%d", &n);
    vector<medalha> v;

    for(int i = 0; i < n; i++)
    {
        string nome;
        int o, p, b;

        cin >> nome >> o >> p >> b;

        v.push_back({o, p, b, nome});

        sort(v.begin(), v.end(), [](medalha a, medalha b) {
            if(a.ouro != b.ouro) return a.ouro > b.ouro;
            if(a.prata != b.prata) return a.prata > b.prata;
            if(a.bronze != b.bronze) return a.bronze > b.bronze;
            return a.pais < b.pais;
        });
    }

    for(int i = 0; i < n; i++)
        printm(v[i]);
}