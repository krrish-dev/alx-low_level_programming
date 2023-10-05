#include "main.h"

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of the string str
 * @str: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if str = NULL or malloc fails
*/
char *_strdup(char *str) 
{
  int idx = 0;
  int str_len = 0;
  char *dup;

  if(str == NULL) 
    return NULL;

  // Calculate length of str
  while(str[str_len] != '\0')
    str_len++;

  // Allocate memory for duplicate + null byte
  dup = malloc(sizeof(char) * (str_len + 1));
  if(dup == NULL)
    return NULL;

  // Copy str to dup
  while(idx < str_len)
  {
    dup[idx] = str[idx];
    idx++;
  }

  // Add null byte at end
  dup[idx] = '\0';

  return dup;
}