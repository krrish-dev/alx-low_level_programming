#include "main.h"

/**
 * clear_bit - Clears the value of a specific
 * bit at a given index.
 * @n: A pointer to the number to index.
 * @index: The index of the bit to clear.
 *
 * This function clears the bit at the specified 'index'
 * in the binary representation
 * of the input number pointed to by 'n'.
 * It returns 1 if successful, or -1 on error
 * (if the index is out of range).
 *
 * Return: 1 if successful, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
