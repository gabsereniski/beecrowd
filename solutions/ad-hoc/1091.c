//1091
#include <stdio.h>
int main()
{
	int c;
	while(scanf("%d",&c)&&c)
	{
		int dpx, dpy, x, y;
		scanf("%d%d",&dpx,&dpy);
		while(c--)
		{
			scanf("%d%d",&x,&y);
			if(x==dpx || y==dpy)
				printf("divisa\n");
			else if(x>dpx && y>dpy)
				printf("NE\n");
			else if(x<dpx && y>dpy)
				printf("NO\n");
			else if(x<dpx && y<dpy)
				printf("SO\n");
			else if(x>dpx && y<dpy)
				printf("SE\n");
		}
	}
	
	return 0;
}