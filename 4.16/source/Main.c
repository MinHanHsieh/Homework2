#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;

	printf("(A)\n\n");

	for ( i = 0; i < 10; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("(B)\n\n");

	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	
	printf("\n");
	printf("(C)\n\n");

	for (i = 9; i >= 0; i--)
	{
		for(j=9;j>=i;j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("\n");
	printf("(D)\n\n");

	for (i = 0; i <= 9; i++)
	{
		for (j = 9; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
}