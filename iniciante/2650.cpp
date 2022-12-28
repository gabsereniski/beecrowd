//2650
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, h;
	
	cin >> n >> h;
	
	while(n--)
	{
		char nome[101] = {};
		getchar();
		
		scanf("%[^0123456789]s", nome);
		nome[strlen(nome) - 1] = '\0';
		
		int altura;
		
		cin >> altura;
		
		if(altura > h) cout << nome << endl;
	}
}