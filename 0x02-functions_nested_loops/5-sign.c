#include "main.h"

/**
 * print_sign - Prints a sign character based on the value of n.
 *
 * @n: The integer input to determine the sign character.
 *
 * Return: 1 if n is positive, 0 if n is zero, and -1 if n is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
