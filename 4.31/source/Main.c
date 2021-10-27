#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int i, j;
	for(i=0;i<5;i++)
	{
		for (j = 0; j < 5-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (i*2)+1; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j <= 5-i ; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= (i * 2) - 1; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	return 0;
}