//vivo
#include <stdio.h>

int main()
{
	int participantes, rodadas, tst = 0;
	
	while(scanf("%d%d",&participantes,&rodadas) && participantes && rodadas)
	{
		int vp[102] = {}, i;
		
		for(i = 0; i < participantes; i++)
			scanf("%d",&vp[i]);
		
		int mv[102] = {};
		int npr, ordem;
		
		while(rodadas--)
		{
			scanf("%d%d",&npr,&ordem);
			
			int j = 0;
			for(i = 0; j < npr; i++)
			{
				if(vp[i] != -1)
				{
					j++;
					scanf("%d",&mv[i]);
					if(mv[i] != ordem)
						vp[i] = -1;
				}
			}
		}
		printf("Teste %d\n",++tst);
		for(i = 0; i < participantes; i++)
		{
			if(vp[i] != -1)
			{
				printf("%d\n",vp[i]);
				break;
			}
		}
		puts("");
	}
	
	return 0;
}