#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j, l;
	int k = 0;
	double a;
	int b, c;
	int g[5000] = { 0 };
	int h[5000] = { 0 };
	double sqrt();
	for (i = 1; i <= 499; i++)
	{
		for (j = 1; j <= 499; j++)
		{
			a = (sqrt((double)(i * i + j * j)));
			b = (int)a;
			if ((a <= 500) && (a - (double)b == 0))
			{
				g[k] = j;
				h[k] = i;
				k += 1;
				c = 0;
				for (l = 0; l < 5000; l++)
				{
					if ((i == g[l]) && (g[l] != 0) && (j == h[l]) && (g[l] != 0)) c = 1;
				}
				if (c != 1) printf("%d\t%d\t%.0lf\t\n", i, j, a);
			}
		}
	}
	system("pause");
	return 0;
}
