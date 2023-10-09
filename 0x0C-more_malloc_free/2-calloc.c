#include "main.h"

/**
 * _calloc - Allocates memory
 * for an array of nmemb elements, each of size bytes.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each array element.
 *
 * Description: Allocates memory
 * for an array of nmemb elements, each
 * of size bytes. The memory is initialized to 0.
 * If nmemb or size is 0, 
 * returns NULL. On malloc failure, returns NULL.
 *
 * Return: Pointer to allocated memory,
 * or NULL on failure or if nmemb/size is 0.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	nmemb *= size;
	while (nmemb--)
		ptr[nmemb] = 0;
	return (ptr);
}
