//1125
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	int place[100];
	int points;
} pilot;

int compare(const void *a, const void *b)
{
	pilot x = *(pilot*)a;
	pilot y = *(pilot*)b;
	
	if(x.points < y.points)
		return 1;
	
	if(x.points > y.points)
		return -1;
	
	if(x.id > y.id)
		return 1;
	
	if(x.id < y.id)
		return -1;
	
	return 0;
}

void pilotInit(pilot p[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		p[i].id = i+1;
		p[i].points = 0;
	}
}

int main()
{
	int G, Ps;
	
	while(scanf("%d%d",&G,&Ps) && G && Ps)
	{
		int i, j;
		pilot p[100];
		
		for(i = 0; i < G; i++)
			for(j = 0; j < Ps; j++)
				scanf("%d",&p[j].place[i]);
		
		int systems;
		
		scanf("%d",&systems);
		
		while(systems--)
		{
			int coloc;
			int system[100] = {};
			
			scanf("%d",&coloc);
			
			for(i = 0; i < coloc; i++)
				scanf("%d",&system[i]);
			
			pilotInit(p, Ps);
			
			for(i = 0; i < G; i++)
				for(j = 0; j < Ps; j++)
					p[j].points += system[p[j].place[i] - 1];
			
			pilot winner[100];	
			
			for(i = 0; i < Ps; i++)
				winner[i] = p[i];
			
			qsort(winner, Ps, sizeof(pilot), compare);
		
			i = 0;
			
			printf("%d", winner[i].id);
			i++;
			
			while(winner[i].points == winner[i-1].points)
			{
				printf(" %d",winner[i].id);
				i++;
			}
			puts("");
		}
	}
	
	return 0;
}