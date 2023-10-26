#include "main.h"

/**
 * print_binary - Prints a number as a binary string.
 * @n: The number to print in binary form.
 *
 * This function prints the binary representation
 * of the input number 'n'.
 *
 * Return: void (no return value).
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, printed = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
