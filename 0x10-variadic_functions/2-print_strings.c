#include "variadic_functions.h"


/** 
 * print_strings - Prints strings with separator, followed
 * by new line
 * @separator: String printed between strings
 * @n: Number of string args passed
 * @...: Variable number of string args to print
 *
 * Description: Prints n number of strings passed to it,
 * separating them with separator. Prints "(nil)" if
 * string is NULL. Prints new line after last string.
 * Uses va_list to iterate through args.
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
