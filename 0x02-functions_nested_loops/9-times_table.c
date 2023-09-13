#include"main.h"

/**
 * times_table - Prints the multiplication table for numbers 0 to 9.
 *
 * Description: The function prints a 9x9 multiplication table,
 *              with rows and columns labeled from 0 to 9.
*/

void times_table(void)
{
	int number, multiplier, product;

	for (number = 0; number <= 9; number++)
	{
		_putchar(48);
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			product = number * multiplier;

			/*
			 * put space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + 48); /*get the first digit*/

			_putchar((product % 10) + 48); /*get the second digit*/
		}
		_putchar('\n');
	}
}
