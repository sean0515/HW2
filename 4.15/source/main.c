#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int j;
	float m = 5000;
	float i = 1.0;
	for (j = 1; j <= 15; j++)
	{
		printf("%d\t%.2f\t%.1f\n", j, m * i, i * 10);
		i = i + 0.05;
	}
	system("pause");
	return 0;
}