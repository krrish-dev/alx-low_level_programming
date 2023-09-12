#include"main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function uses _putchar to print the alphabet
 *              from 'a' to 'z' repeatedly for a total of 10 lines.
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
