#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string to concatenate.
 * If NULL, treated as empty string
 * @s2: The second string to concatenate. 
 * If NULL, treated as empty string
 * @n: The maximum number of bytes from s2 to concatenate to s1
 *
 * Description: Concatenates s1 and first n bytes of s2. Adds null terminator.
 * Allocates memory for the concatenated string.
 * If function fails, returns NULL.
 * If n >= length of s2, concatenates entire s2 string.
 *
 * Return: Pointer to the concatenated string if success, NULL if failure.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*Memory reservation-for case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*Copy first string into str.*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy second stringg into str.*/
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
