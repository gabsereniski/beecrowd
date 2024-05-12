//2554
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int p, d;
	
	while(cin >> p >> d)
	{
		int a, b, c;
		int dia, mes, ano;
		int deu = 0;
		
		while(d--)
		{
			int tot = 0;
			scanf("%d/%d/%d", &a, &b, &c);
			for(int i = 0; i < p; i++)
			{
				int q;
				cin >> q;
				
				tot += q;
			}
			
			if(tot == p  && !deu)
			{
				deu = 1;
				dia = a;
				mes = b;
				ano = c;
			}
		}
		
		if(deu) printf("%d/%d/%d\n", dia, mes, ano);
		else    cout << "Pizza antes de FdI\n";
	}
}