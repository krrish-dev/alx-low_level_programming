#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success) by krrish
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, result;

	for (count = 0; count < 50; count++)
	{
		result = fib1 + fib2;
		printf("%lu", result);

		fib1 = fib2;
		fib2 = result;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
