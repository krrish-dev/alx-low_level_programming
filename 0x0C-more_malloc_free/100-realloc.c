#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * using malloc and free
 * @ptr: Pointer to the memory
 * previously allocated
 * @old_size: The old size in bytes
 * of the allocated space for ptr
 * @new_size: The new size in bytes
 * for the new memory block
 *
 * Description: Reallocates a block
 * of memory to new_size bytes.
 * The contents of the old block up to the lesser
 * of old_size and new_size
 * are copied to the new block.
 *  Any bytes in the new block beyond the size
 * of the old block are not initialized.
 * If new_size > old_size,
 * the added memory is not initialized.
 * If new_size == old_size, simply return ptr.
 * If ptr is NULL,
 * behave like malloc(new_size).
 * If new_size is 0 and ptr is not NULL,
 * free ptr and return NULL.
 *
 * Return: Pointer to the new memory,
 * or NULL if failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)p + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (p);
}
