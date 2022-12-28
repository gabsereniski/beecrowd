//1241
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	
	scanf("%d", &n);
	
	while(n--)
	{
		char a[1001] = {}, b[1001] = {};
		
		scanf("%s %s", a, b), getchar();
		
		int la = strlen(a), lb = strlen(b);
		
		if(la - lb < 0)
		{
			printf("nao encaixa\n");
			continue;
		}
		
		int i, j, nao = 0;
		
		for(i = la - lb, j = 0; j < lb; i++, j++)
		{
			if(a[i] != b[j])
			{
				printf("nao encaixa\n");
				nao = 1;
				break;
			}
		}
		
		if(nao) continue;
		
		printf("encaixa\n");
	}
	
	return 0;
}