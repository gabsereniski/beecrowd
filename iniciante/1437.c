//1437
#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n)
	{
		char d = 'N', o;
		while(n--)
		{
			scanf(" %c",&o);
			if(d=='N' && o=='D')
				d='L';
			else if(d=='N' && o=='E')
				d='O';
			else if(d=='L' && o=='D')
				d='S';
			else if(d=='L' && o=='E')
				d='N';
			else if(d=='S' && o=='D')
				d='O';
			else if(d=='S' && o=='E')
				d='L';
			else if(d=='O' && o=='D')
				d='N';
			else if(d=='O' && o=='E')
				d='S';
		}
		printf("%c\n",d);
	}
	
	return 0;
}