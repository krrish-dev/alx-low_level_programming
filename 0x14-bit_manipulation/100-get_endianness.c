#include "main.h"

/**
 * get_endianness - Returns the endianness of the system.
 *
 * This function determines the endianness
 * of the system and returns 0 if it's big
 * endian or 1 if it's little endian.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
