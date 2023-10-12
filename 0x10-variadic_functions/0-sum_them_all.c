#include "variadic_functions.h"


/**
 * sum_them_all - Sums all the parameter arguments
 * @n: The number of arguments passed to the function
 * @...: A variable number of arguments to sum
 *
 * Description: This function returns the sum of all the
 * parameter arguments passed to it. The first parameter
 * n determines how many extra arguments were passed to
 * the function. A va_list is used to iterate over the
 * arguments and sum them.
 *
 * Return: The sum of all the arguments, or 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
