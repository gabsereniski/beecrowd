//1156
#include <stdio.h>
int main()
{
	double i, j=1, s=0;
	for(i=1;i<=39;i+=2)
	{
		s+=(i/j);
		j+=j;
	}
	printf("%.2lf\n",s);
	
	return 0;
}
