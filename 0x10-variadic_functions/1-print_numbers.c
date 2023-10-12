#include "variadic_functions.h"


/**
 * print_numbers - Prints numbers with separator,
 * followed by new line
 * @separator: String printed between numbers
 * @n: Number of int args passed
 * @...: Variable number of int args to print
 *
 * Description: Prints n ints passed to it, separated by
 * separator string. Prints new line after last number.
 * Uses a va_list to iterate through args.
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
