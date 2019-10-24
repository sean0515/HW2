#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float an, bb, tch, tcr, cl;

	while (1)
	{
		printf("Enter account number(-1 to end) : ");
		scanf_s("%f", &an);
		if (an == -1)
		{
			system("pause");
			return 0;
		}

		printf("Enter beginning balance : ");
		scanf_s("%f", &bb);
		printf("Enter total charge : ");
		scanf_s("%f", &tch);
		printf("Enter total credits : ");
		scanf_s("%f", &tcr);
		printf("Enter credit limit : ");
		scanf_s("%f", &cl);

		if ((bb + tch - tcr) > cl)
		{
			printf("account :\t%.2f\n", an);
			printf("credit limit :\t%.2f\n", cl);
			printf("balance :\t%.2f\n", bb);
			printf("credit limit exceeded\n");

		}
		printf("\n");
	}
}