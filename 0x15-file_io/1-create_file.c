#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: the string variable length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - Creates a file with content
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filed;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	filed = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (filed == -1)
		return (-1);
	if (len)
		bytes = write(filed, text_content, len);
	close(filed);
	return (bytes == len ? 1 : -1);
}

