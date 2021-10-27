#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int i;
	double pri = 5000.00;
	double rate[] = { 0.1, 0.105,0.11,0.115,0.12 };
	
	for (i = 0; i < 5; i++)
	{
		printf("%4s%21s\n", "year", "amount of deposit");
		for (unsigned int year = 1; year <= 15; year++)
		{
			double amount = pri * pow(1.0 + rate[i], year);
			printf("%4u%21.2f\n", year, amount);
		}
	}
}