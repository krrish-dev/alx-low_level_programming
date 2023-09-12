#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a single character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, the function returns 1 (the number of characters written).
 *         On error, it returns -1, and errno is set to indicate the error.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
