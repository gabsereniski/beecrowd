//2163
#include <stdio.h>
int main()
{
	int l, c, lx=0, ly=0;
	scanf("%d%d",&l,&c);
	int m[l][c], i, j;
	for(i=0;i<l;i++)
		for(j=0;j<c;j++)
			scanf("%d",&m[i][j]);
	for(i=0;i<l;i++)
		for(j=0;j<c;j++)
		{
			if(m[i][j]==42 && 
			m[i-1][j-1]==7 && m[i-1][j]==7 && m[i-1][j+1]==7 &&
			m[i][j-1]==7 && m[i][j+1]==7 && m[i+1][j-1]==7 &&
			m[i+1][j]==7 && m[i+1][j+1]==7)
			{
				lx = i+1; ly = j+1; break;
			}
		}
	printf("%d %d\n",lx,ly);
	
	return 0;
}