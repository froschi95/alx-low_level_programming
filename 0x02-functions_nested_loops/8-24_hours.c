#include "main.h"

/**
 * jadk_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Returns: void
 */

void jack_bauer(void)
{
	int hour_tn, hour_un, min_tth, min_hth;

	hour_tn = hour_un = min_tth = min_hth = '0';

	while (hour_tn <= '2')
	{
		while (hour_un <= '9')
		{
			if (hour_tn == '2' && hour_un > '3')
			{
				break;
			}
			while (min_tth <= '5')
			{
				while (min_hth <= '9')
				{
					_putchar(hour_tn);
					_putchar(hour_un);
					_putchar(':');
					_putchar(min_tth);
					_putchar(min_hth);
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
