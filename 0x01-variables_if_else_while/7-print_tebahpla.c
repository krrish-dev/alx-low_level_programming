#include<stdio.h>

/**
 * main - Entry point - by krrish
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char le = 'z';

	while (le >= 'a')
	{
		putchar(le);
		le--;
	}
	putchar('\n');

	return (0);
}
