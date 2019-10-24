#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l, b;
	int i, j;
	printf("Enter length and breadth : ");
	scanf_s("%d %d", &l, &b);
	for (i = 1; i <= l; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if ((i == 1) || (i == l))
			{
				printf("+");
			}
			else if ((j == 1) || (j == b))
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
