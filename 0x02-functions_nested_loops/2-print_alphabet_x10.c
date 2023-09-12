#include"main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function uses _putchar to print the alphabet
 *              from 'a' to 'z' repeatedly for a total of 10 lines.
*/

void print_alphabet_x10(void)
{
	int line_number, current_character;

	for (line_number = 0; line_number <= 9; line_number++)
	{
		for (current_character = 'a'; current_character <= 'z'; current_character++)
			_putchar(current_character);
		_putchar('\n');
	}
}
