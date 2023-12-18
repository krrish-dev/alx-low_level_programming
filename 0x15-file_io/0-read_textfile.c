#include "main.h"

/**
 * read_textfile - read and print text from a file
 * @filename: name of file to read
 * @letters: the number of bytes to read
 *
 * Return: the number of bytes successfully
 *			read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	filed = open(filename, O_RDONLY);
	if (filed == -1)
		return (0);
	bytes = read(filed, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(filed);
	return (bytes);
}

