#include "main.h"

/**
 * create_array - Dynamically creates and initializes an array of chars
 * 
 * @size: Number of elements in the array (array size) 
 * @c: Char to initialize each element of the array with
 * 
 * Return: Pointer to the newly created array, or NULL on failure
*/

char *create_array(unsigned int size, char c)
{
  char *array = malloc(sizeof(char) * size);
  
  if (size == 0 || !array)
    return NULL;

  for (unsigned int i = 0; i < size; i++)
    array[i] = c;

  return array;
}