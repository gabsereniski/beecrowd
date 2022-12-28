//1093
#include <stdio.h>
#include <math.h>

double prob(int ev1, int ev2, int at)
{
	double dice;
	
	if(at == 3)
		return (double)ev1 / (ev1 + ev2);
	
	dice = 1.0 - (6.0 - at) / 6.0;
	dice = (1.0 - dice) / dice;
	
	return (1.0 - pow(dice, ev1)) / (1.0 - pow(dice, ev1 + ev2));
}

int main()
{
	int ev1, ev2, at, d;
	
	while(scanf("%d%d%d%d",&ev1,&ev2,&at,&d)&&ev1&&ev2&&at&&d)
	{
		int aux = ev1;
		ev1 = 0;
		
		while(aux > 0)
		{
			aux -= d;
			ev1++;
		}
		
		aux = ev2;
		ev2 = 0;
		
		while(aux > 0)
		{
			aux -= d;
			ev2++;
		}
		
		double p = prob(ev1, ev2, at);
		
		printf("%.1f\n", p * 100.0);
	}
	
	return 0;
}