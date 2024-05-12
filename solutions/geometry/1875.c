//1875
#include <stdio.h>
int main()
{
	int t, n;
	char m, l;
	scanf("%d",&t);
	while(t--)
	{
		int g=0, r=0, b=0;
		scanf("%d",&n);
		while(n--)
		{
			scanf(" %c %c",&m,&l);
			switch(m)
			{
				case 'G':
					if(l=='R') g+=1;
					else if(l=='B') g+=2;
					break;
					
				case 'R':
					if(l=='B') r+=1;
					else if(l=='G') r+=2;
					break;
					
				case 'B':
					if(l=='G') b+=1;
					else if(l=='R') b+=2;
					break;
			}
		}
		if(g==r && r==b)
				printf("trempate\n");
		else if (g==r && (r>b) || 
		     	 r==b && (b>g) || 
				 g==b && (g>r) )
			printf("empate\n");
		else if(g>r && g>b)
			printf("green\n");
		else if(r>g && r>b)
			printf("red\n");
		else if(b>r && b>g)
			printf("blue\n");
	}
	
	return 0;
}