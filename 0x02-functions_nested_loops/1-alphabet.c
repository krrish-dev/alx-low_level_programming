#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet from 'a' to 'z'.
 */
void print_alphabet(void)
{
    int current_character;

    for (current_character = 'a'; current_character <= 'z'; current_character++)
        _putchar(current_character);

    _putchar('\n');
}
