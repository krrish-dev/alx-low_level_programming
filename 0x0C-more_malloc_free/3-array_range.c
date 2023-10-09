#include "main.h"

/**
 * array_range - Creates an array
 * of integers within a given range
 * @min: The minimum value
 * to be included in the array
 * @max: The maximum value
 *  to be included in the array
 *
 * Description: Creates an array of integers
 * containing all values
 * between @min (inclusive) and @max (inclusive).
 * The values are ordered
 * from @min to @max in the array.
 * If @min > @max, returns NULL.
 * If malloc fails, returns NULL.
 *
 * Return: Pointer to the newly created array,
 * or NULL on failure
*/
int *array_range(int min, int max)
{
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
