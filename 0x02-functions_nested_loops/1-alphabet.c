#include"main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'.
 *                 the alphabet a - z
*/

void print_alphabet(void)
{
	int current_ch;

	for (current_ch = 'a'; current_ch <= 'z'; current_ch++)
		_putchar(current_ch);
	_putchar('\n');
}
