#include <stdio.h>

/**
 * main - Entry point - by krrish
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char le = 'a';

	while (le <= 'z')
	{
		putchar(le);
		le++;
	}
	putchar('\n');

	return (0);
}
