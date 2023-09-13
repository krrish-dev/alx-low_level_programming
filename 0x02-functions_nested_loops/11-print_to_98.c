#include "main.h"

/**
 * print_to_98 - Prints numbers from n to 98 in ascending or descending order.
 *
 * @n: The starting point for counting.
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; count--)
			printf("%d, ", count);
	else
		for (count = n; count < 98; count++)
			printf("%d, ", count);
	printf("98\n");
}
