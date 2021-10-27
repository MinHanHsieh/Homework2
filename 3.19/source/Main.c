#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float principal;
	float rate;
	int days;

	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
		if (principal == -1)break;
		printf("Enter interest rate: ");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &days);
		printf("The interest chage is $%.2f\n\n", (principal*rate*days) / 365);
	}
}