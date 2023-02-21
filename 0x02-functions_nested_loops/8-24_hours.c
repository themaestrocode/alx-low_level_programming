#inlude "main.h"

/**
 * jack_bauer - his hours perday
 *
 * no return value
 *
 */
void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
