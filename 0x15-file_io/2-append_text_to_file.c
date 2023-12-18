#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: the string variable length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int itr = 0;

	if (!s)
		return (0);

	while (*s++)
		itr++;
	return (itr);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: The text content to append
 *					to the file
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	filed = open(filename, O_WRONLY | O_APPEND);
	if (filed == -1)
		return (-1);
	if (len)
		bytes = write(filed, text_content, len);
	close(filed);
	return (bytes == len ? 1 : -1);
}

