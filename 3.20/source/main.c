#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, r, s;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end) : ");
		scanf_s("%f", &h);
		if (h == -1)
		{
			system("pause");
			return 0;
		}
		printf("Enter hourly rate of the worker ($00.00) : ");
		scanf_s("%f", &r);

		if (h <= 40)
		{
			printf("Salary is $%.2f\n", h * r);
		}
		else
		{
			s = (40 * r) + (h - 40.00) * 1.5 * r;
			printf("Salary is $%.2f\n", s);
		}
		printf("\n");
	}
}
