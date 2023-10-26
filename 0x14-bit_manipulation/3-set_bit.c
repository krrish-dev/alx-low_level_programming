#include "main.h"

/**
 * set_bit - Sets the value of a specific bit at a given index.
 * @n: A pointer to the number to index.
 * @index: The index of the bit to set.
 *
 * This function sets the bit at the specified
 * 'index' in the binary representation
 * of the input number pointed to by 'n'.
 * It returns 1 if successful, or -1 on error
 * (if the index is out of range).
 *
 * Return: 1 if successful, -1 on error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
