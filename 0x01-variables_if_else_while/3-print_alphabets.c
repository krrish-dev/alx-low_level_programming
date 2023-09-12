#include <stdio.h>

/**
 * main - Entry point - by krrish
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char le_lower = 'a';
	char le_upper = 'A';

	/*prints a - z*/
	while (le_lower <= 'z')
	{
		putchar(le_lower);
		le_lower++;
	}

	/*print A - Z*/
	while (le_upper <= 'Z')
	{
		putchar(le_upper);
		le_upper++;
	}
	putchar('\n');

	return (0);
}
