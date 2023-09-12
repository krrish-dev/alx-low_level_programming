#include "main.h"

/**
 * main - Entry point
 *
 * Description: This function serves as the entry point of the program
 *              and prints the string "_putchar" using a custom putchar
 *              prototype implemented as  _putchar.
 *
 * Return: Always returns 0 to indicate successful program execution.
 */


#include "main.h"

int main(void)
{
    char outputString[] = "_putchar";
    int characterIndex;

    for (characterIndex = 0; characterIndex < 8; characterIndex++)
        _putchar(outputString[characterIndex]);

    _putchar('\n');

    return (0);
}

