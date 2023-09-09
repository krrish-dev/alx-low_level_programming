#include<stdio.h>

/**
 * main - Entry point - by krrish
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d = 48; /*48; decimal rep of 0*/

	while (d <= 102) /*102; decimal rep of f*/
	{
		putchar(d);

		/* after 9 we jump till 96; `*/
		if (d == 57)
			d += 39;
		d++;
	}
	putchar('\n');

	return (0);
}
