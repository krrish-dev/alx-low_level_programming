#include "main.h"

/**
 * jack_bauer - Prints every minute of the day in 24-hour format.
*/

void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
