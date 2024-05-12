#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int cidade = 1;
    while(scanf("%d", &n) && n)
    {
        int x, y;
        int total_c = 0;
        int total_p = 0;

        map<int, int> m;

        for(int i = 0; i < n; i++)
        {
            scanf("%d%d", &x, &y);
            int mean = y/x;
            total_p += x, total_c += y;

            if(!m.count(mean)) m[mean] = x;
            else               m[mean] += x;
        }

        if(cidade > 1) printf("\n");
        printf("Cidade# %d:\n", cidade++);
        int s = m.size();
        int i = 0;
        for(auto x : m)
        {
            printf("%d-%d", x.second, x.first);
            if(i < s-1) printf(" ");
            else printf("\n");
            i++;
        }

        float avg_c = (float)total_c/total_p;
		avg_c = (floor(100*avg_c))/100.0;

        printf("Consumo medio: %.2f m3.\n", avg_c);
    }
}