#include "main.h"

/**
 * flip_bits - Returns the number of bits that need to be flipped
 * to transform one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * This function calculates and returns the number
 * of bits that would need to be flipped
 * in order to convert the first number 'n'
 * into the second number 'm'.
 *
 * Return: The number of bits to flip to convert 'n' to 'm'.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
