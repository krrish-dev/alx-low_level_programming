#include "main.h"

/**
 * malloc_checked - Allocates requested memory using malloc
 * and exits if allocation fails
 * @b: Number of bytes to allocate
 * Return: Pointer to allocated memory of @b bytes
 * or NULL if allocation fails
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);
}
