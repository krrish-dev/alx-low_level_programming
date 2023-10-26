#include "main.h"

/**
 * get_bit - Gets the value of a specific bit at a given index.
 * @n: The number to index.
 * @index: The index of the bit to retrieve.
 *
 * This function returns the state (0 or 1) of the bit
 * at the specified 'index' in
 * the binary representation of the input number 'n'.
 * If the index is out of range,
 * it returns -1.
 *
 * Return: The bit state (0 or 1) or -1 on error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
