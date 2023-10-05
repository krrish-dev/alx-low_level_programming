#include "main.h"

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
 * Description: This function concatenates two strings into a newly 
 * allocated string. It handles NULL strings by treating them as empty.
 * The new string is null-terminated. Returns NULL on failure.
 * 
 * Return: Pointer to the newly allocated concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
  // Determine lengths of s1 and s2
  int len1 = _strlen(s1);
  int len2 = _strlen(s2);

  // Allocate memory for concatenated string
  char *concat = malloc(sizeof(char) * (len1 + len2 + 1));
  if (!concat)
    return (NULL);

  // Copy s1 and s2 into concat
  for (int i = 0; i < len1; i++)
    concat[i] = s1[i];
  for (int i = 0; i < len2; i++) 
    concat[len1 + i] = s2[i];

  // Add null terminator
  concat[len1 + len2] = '\0';

  // Return concatenated string
  return (concat);
}