#include <stdio.h>
#include <string.h>

#define MAX 1000

int d[MAX] = {}, a, v, x, y;

int main()
{
	int i, ts = 0, ma = 0, indm[MAX] = {}, j = 1;

	while (scanf("%d %d", &a, &v) && a && v)
	{
		while (v--)
		{
			scanf("%d %d", &x, &y);
			d[x]++;
			d[y]++;
		}
		for (i = 1; i <= a; i++)
		{
			if (d[i] > ma)
			{
				ma = d[i];
				indm[0] = i;
			}
		}

		for (i = 0; i <= a; i++)
		{
			if (d[i] == ma && i != indm[0])
				indm[j++] = i;
		}

		printf("Teste %d\n", ++ts);

		for (i = 0; i <= j; i++)
		{
			if (indm[i])
			{
				printf("%d", indm[i]);

				if (i < j)
					printf(" ");
			}
		}
		printf("\n\n");

		memset(d, 0, sizeof(int) * MAX);
		memset(indm, 0, (sizeof(int) * MAX));
		ma = 0;
	}
	return 0;
}