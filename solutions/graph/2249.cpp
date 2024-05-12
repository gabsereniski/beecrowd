#include <bits/stdc++.h>
using namespace std;

typedef pair<string, string> ss;

map<ss, int> get_erdos_num(map<ss, set<ss>> G, map<ss, int> erdos_num)
{
    ss src = { "Erdos", "P." };
    map<ss, set<ss>>::iterator test = G.find(src);
    if(test == G.end()) return erdos_num;

    queue<ss> next;

    erdos_num[src] = 0;
    next.push(src);

    while(!next.empty())
    {
        ss u = next.front();
        next.pop();

        map<ss, set<ss>>::iterator it_u = G.find(u);
        const set<ss>& relacoes = it_u->second;

        for (const ss& relacao : relacoes)
        {
            if(erdos_num[relacao] == -1)
            {
                erdos_num[relacao] = erdos_num[u] + 1;
                next.push(relacao);
            }
        }
    }

    return erdos_num;
}

int main()
{
    int a;
    int teste = 1;

    while((cin >> a) && a)
    {
        cout << "Teste " << teste++ << endl;
        map<ss, set<ss>> g;
        map<ss, int> erdos;

        cin.ignore();

        while(a--)
        {
            vector<ss> nomes;
            string linha;
            getline(cin, linha);

            istringstream iss(linha);

            string nome_completo;

            while(getline(iss, nome_completo, ','))
            {
                if(nome_completo.back() == '.') nome_completo.pop_back();
                if(nome_completo.front() == ' ') nome_completo.erase(0, 1);
                
                istringstream issnc(nome_completo);
                string nome, sobrenome;
                issnc >> nome >> sobrenome;

                nomes.push_back({sobrenome, nome});
                erdos[{sobrenome, nome}] = -1;

            }

            
            for(int i = 0; i < nomes.size(); i++)
            {
                for(int j = 0; j < nomes.size(); j++)
                {
                    if(i != j)
                    {
                        g[nomes[i]].insert(nomes[j]);
                        g[nomes[j]].insert(nomes[i]);
                    }
                }
            }
        }

        erdos = get_erdos_num(g, erdos);

        for (const auto& pair : erdos) 
        {
            ss nome_erdos = {"Erdos", "P."};
            
            const ss& autor = pair.first;
            
            if(autor == nome_erdos) continue;
            
            int num_erdos = pair.second;
            cout << autor.second << " " << autor.first << ": ";
            num_erdos == -1 ? cout << "infinito" : cout << num_erdos;
            cout << endl;
        }

        cout << endl;
    }
}