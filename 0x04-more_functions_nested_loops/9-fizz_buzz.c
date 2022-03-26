#include <stdio.h>

/**
* main - fizzbuzz program
*
* Return: no return (return is void)
*/

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", count);
		}

		if (count != 100)
		{
			printf(" ");
		}
	}

	putchar('\n');

	return (0);
}
