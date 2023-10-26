#include "main.h"

/**
 * binary_to_uint - Converts a binary number
 * string to an unsigned integer.
 * @b: The binary number as a string.
 *
 * This function takes a binary number in the form
 * of a string and converts it into
 * its unsigned integer representation.
 * It returns the resulting unsigned integer.
 *
 * Return: The unsigned integer representation
 * of the binary number 'b'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}

