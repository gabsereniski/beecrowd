//2551
#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		float t, d, media, maior=-1;
		int i;
		for(i=1;i<=n;i++)
		{
			scanf("%f%f",&t,&d);
			media = d/t;
			if(media>maior)
			{
				maior = media;
				printf("%d\n",i);
			}
		}
	}
	
	return 0;
}
