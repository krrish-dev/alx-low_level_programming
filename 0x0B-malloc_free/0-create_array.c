#include "main.h"

/**
 * create_array - Creates and initializes array with a char
 * @size: Size of array 
 * @c: Char to initialize array with
 *
 * Return: Pointer to new array, or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *number = malloc(size);

	if (size == 0 || number == 0)
		return (0);

	while (size--)
		number[size] = c;

	return (number);
}
