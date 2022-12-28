//1846
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char uni[10][30] = {"zero", "um", "dois", "tres", "quatro", 
		                "cinco", "seis", "sete", "oito", "nove"};
	char dez[10][30] = {"dez", "onze", "doze", "treze", "quatorze",
		                "quinze", "dezesseis", "dezessete",
		                "dezoito", "dezenove"};
	char den[9][30] =  {"vinte", "trinta", "quarenta", "cinquenta",
		                "sessenta", "setenta", "oitenta", "noventa"};
	char cen[9][30] =  {"cento", "duzentos", "trezentos",
		                "quatrocentos", "quinhentos", "seiscentos",
		                "setecentos", "oitocentos", "novecentos"};
	int n;
	
	while(scanf("%d", &n) != EOF)
	{
		int flag = 0;
		
		if(!n)
		{
			printf("zero\n");	                
			continue;
		}
		
		if(n >= 10000) flag = 1;
		
		if(n >= 100000)
		{
			if(n <= 100999)	printf("cem"), n -= 100000;
			else            cout << cen[n / 100000 - 1];
			
			n %= 100000;
			
			if(!n)
			{
				printf(" mil\n");
				continue;
			}
			
			if(n < 1000)
			{
				if(n % 100 && n > 100) printf(" mil ");
				else                   printf(" mil e ");
			}
			
			else printf(" e ");
		}
		
		if(n >= 20000)
		{
			cout << den[n / 10000 - 2];
			
			n %= 10000;
			
			if(!n)
			{
				printf(" mil\n");
				continue;
			}
			
			if(n < 1000)
			{
				if(n % 100 && n > 100) printf(" mil ");
				else                   printf(" mil e ");
			}
			
			else printf(" e ");
		}
		
		if(n >= 10000)
		{
			cout << dez[(n / 1000) % 10];
			
			n %= 1000;
			
			if(!n)
			{
				printf(" mil\n");
				continue;
			}
			
			if(n < 1000)
			{
				if(n % 100 && n > 100) printf(" mil ");
				else                   printf(" mil e ");
			}
			
			else printf(" e ");
		}
		
		if(n >= 1000)
		{
			if(n >= 2000 || flag) cout << uni[n / 1000] << ' ';
			
			if(!(n % 1000)) printf("mil");
			
			n %= 1000;
			
			if(!n)
			{
				printf("\n");
				continue;
			}
			
			if(n < 100 || (n < 1000 && !(n % 100))) printf("mil e ");
			
			else printf("mil ");
		}
		
		if(n >= 100)
		{
			if(n == 100) printf("cem");
			
			else cout << cen[n / 100 - 1];
			
			n %= 100;
			
			if(!n)
			{
				printf("\n");
				continue;
			}
			
			printf(" e ");
		}
		
		if(n >= 20)
		{
			cout << den[n / 10 - 2];
			
			n %= 10;
			
			if(!n)
			{
				printf("\n");
				continue;
			}
			
			printf(" e ");
		}
		
		if(n >= 10)
		{
			cout << dez[n % 10];
			n = 0;
		}
		
		if(n < 10 && n) cout << uni[n];
		
		printf("\n");
	}
}