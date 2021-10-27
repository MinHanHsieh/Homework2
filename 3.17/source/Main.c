#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	float begining_balance;
	float total_charges;
	float total_credit;
	float credit_limit;
	float new_balance;

	while (1)
	{
		printf("Enter account number (-1 to end) :");
		scanf_s("%d", &number);
		if (number == -1)break;
		printf("Enter begining balance :");
		scanf_s("%f", &begining_balance);
		printf("Enter total charges :");
		scanf_s("%f", &total_charges);
		printf("Enter total credits :");
		scanf_s("%f", &total_credit);
		printf("Enter credit limit :");
		scanf_s("%f", &credit_limit);
		float new_balance = begining_balance + total_charges - total_credit;
		printf("Account :	%d\n", number);
		printf("Credit limit :	%.2f\n", credit_limit);
		printf("Balance :	%.2f\n", new_balance);
		if (new_balance > credit_limit)printf("Credit Limit Exceeded\n");
	}
}