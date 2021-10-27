#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int paycode, time;
	float salary;

	printf("Enter paycode: ");
	scanf_s("%d", &paycode);
	switch (paycode)
	{
	case 1:
	{
		printf("Enter weekly salary: ");
		scanf_s("%f", &salary);
		printf("Pay:%.2f\n",salary*4);

	}
	case 2:
	{
		printf("Enter hourly wage: ");
		scanf_s("%f", &salary);
		printf("Enter work hours: ");
		scanf_s("%d", &time);
		if (time > 40)printf("%.2f", 40 *salary+(time - 40)*1.5*salary);
		else
		{
			printf("%.2f", time *salary);
		}
	}
	case 3:
	{
		printf("Enter weekiy sales: ");
		scanf_s("%f", &salary);
		printf("%.2f",250+0.057*salary);
	}
	case 4:
	{
		printf("Enter produce amount: ");
		scanf_s("%d", &time);
		printf("Enter item price: ");
		scanf_s("%f", &salary);
		printf("%.2f", salary*time);
	}
	}
}