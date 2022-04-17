#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Returns: void
 */

void jack_bauer(void)
{
	int hour_tn, hour_un, min_tth, min_hth;

	hour_tn = 0;

	while (hour_tn < 3)
	{
		hour_un = 0;
		while (hour_un < 10)
		{
			if (hour_tn == 2 && hour_un > 3)
			{
				break;
			}
			min_tth = 0;
			while (min_tth < 6)
			{
				min_hth = 0;
				while (min_hth < 10)
				{
					_putchar(hour_tn + 48);
					_putchar(hour_un + 48);
					_putchar(':');
					_putchar(min_tth + 48);
					_putchar(min_hth + 48);
					_putchar('\n');
					min_hth++;
				}
				min_tth++;
			}
			hour_un++;
		}
		hour_tn++;
	}
}
