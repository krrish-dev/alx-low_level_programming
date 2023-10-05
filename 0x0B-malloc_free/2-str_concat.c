#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to measure the length of
 * 
 * Return: The length of @str
*/  
int _strlen(char *str)
{
  int len = 0;

  while (str[len] != '\0')
    len++;

  return (len);
}

/**
 * str_concat - Concatenates two strings
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
  int s1_len, s2_len, i;
  char *concat_str;

  // Handle NULL inputs
  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)  
    s2 = "";

  // Get lengths of s1 and s2
  s1_len = _strlen(s1);
  s2_len = _strlen(s2);
  
  // Allocate memory for concatenated string
  concat_str = malloc((s1_len + s2_len + 1) * sizeof(char));
  if (concat_str == NULL)
    return (NULL);

  // Concatenate s1 and s2
  for (i = 0; i < s1_len + s2_len; i++) {
    if (i < s1_len)
      concat_str[i] = s1[i];
    else
      concat_str[i] = s2[i - s1_len];
  }

  concat_str[i] = '\0'; // Null terminate

  return (concat_str);
}