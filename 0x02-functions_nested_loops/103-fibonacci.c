#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints the result of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success) by krrish
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, result;
	float total_sum;

	while (1)
	{
		result = fib1 + fib2;

		if (result > 4000000)
			break;

		if ((result % 2) == 0)
			total_sum += result;

		fib1 = fib2;
		fib2 = result;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
