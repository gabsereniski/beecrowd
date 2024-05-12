//2542
#include <stdio.h>
int main()
{
	int jt, mi, li, i, j;
	int m[102][102], l[102][102];
	while(scanf("%d",&jt)!=EOF)
	{
		scanf("%d%d",&mi,&li);
		for(i=0;i<mi;i++)
			for(j=0;j<jt;j++)
				scanf("%d",&m[i][j]);
		
		for(i=0;i<li;i++)
			for(j=0;j<jt;j++)
				scanf("%d",&l[i][j]);
		
		int iem, iel;
		
		scanf("%d%d",&iem,&iel);
		
		int je;
		
		scanf("%d",&je);
		
		int pm, pl;
		
		pm = m[iem-1][je-1];
		pl = l[iel-1][je-1];
		
		if(pm>pl)
			printf("Marcos\n");
		else if(pm<pl)
			printf("Leonardo\n");
		else if(pm==pl)
			printf("Empate\n");
	}
	
	return 0;
}
