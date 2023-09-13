#include "main.h"

/**
 * print_times_table - Prints a times table for a given n.
 *
 * @n: The number for which to print the times table.
*/

void print_times_table(int n)
{
	int product, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				product = num * mult;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');

				if (product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				} else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
