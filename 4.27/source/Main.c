#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int side1, side2, hypotenuse;

	for (side1 = 1; side1 <= 500 ; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
			{
				if (side1<side2&&(hypotenuse *hypotenuse) == (side2 * side2) + (side1 * side1))
				{
					printf("side1=%d\t", side1 );
					printf("side2=%d\t", side2);
					printf("hypotenuse=%d\n", hypotenuse);
				}
			}
		}
	}

}