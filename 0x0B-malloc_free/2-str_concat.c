#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string to measure the length of 
 *
 * Return: The length of the string
*/
int _strlen(char *s)
{
  int len = 0;
  while (s[len] != '\0')
    len++;
  return (len);
}

/**
 * str_concat - Concatenates two strings into a new allocated string 
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: Pointer to the newly allocated concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
  /* Determine lengths of s1 and s2 */
  int len1 = _strlen(s1); 
  int len2 = _strlen(s2);

  char *concat = malloc(sizeof(char) * (len1 + len2 + 1));
  if (!concat)
    return (NULL);

  int i;
  /* Copy s1 to concat */
  for (i = 0; i < len1; i++)
    concat[i] = s1[i];
  
  /* Copy s2 after s1 */
  for (i = 0; i < len2; i++)
    concat[len1 + i] = s2[i];

  concat[len1 + len2] = '\0';

  return (concat);
}