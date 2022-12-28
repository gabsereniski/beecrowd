//2139
#include <stdio.h>
int main()
{
	int m, d, f;
	while(scanf("%d%d",&m,&d)!=EOF)
	{
		if(d==24 && m==12)
			printf("E vespera de natal!\n");
		else if(d>25 && m==12)
			printf("Ja passou!\n");
		else if(d==25 && m==12)
			printf("E natal!\n");
		else
		{
			printf("Faltam ");
			switch(m)
			{
				case 1:
					f = 360-d;
					printf("%d ",f);
					break;
				case 2:
					f = 329-d;
					printf("%d ",f);
					break;
				case 3:
					f = 300-d;
					printf("%d ",f);
					break;
				case 4:
					f = 269-d;
					printf("%d ",f);
					break;
				case 5:
					f = 239-d;
					printf("%d ",f);
					break;
				case 6:
					f = 208-d;
					printf("%d ",f);
					break;
				case 7:
					f = 178-d;
					printf("%d ",f);
					break;
				case 8:
					f = 147-d;
					printf("%d ",f);
					break;
				case 9:
					f = 116-d;
					printf("%d ",f);
					break;
				case 10:
					f = 86-d;
					printf("%d ",f);
					break;
				case 11:
					f = 55-d;
					printf("%d ",f);
					break;
				case 12:
					f = 25-d;
					printf("%d ",f);
					break;
			}
			printf("dias para o natal!\n");
		}
	}
	return 0;
}