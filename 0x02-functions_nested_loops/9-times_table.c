#include "main.h"
/**
 * times_table-  prints the 9 times table, starting with 0
 * Return: Void
 */
void times_table(void)
{
	int u = 0;
	int v;
	int times;

	while (u <= 9)
	{
		int v = 0;

		while (v <= 9)
		{
			times = u * v;
			if (v == 0)
			{
				_putchar('0' + times);
			}
			else if (times < 10)
			{
				_putchar(' ');
				_putchar('0' + times);
			}
			else
			{
				_putchar('0' + times / 10);
				_putchar('0' + times % 10);
			}
			if (v < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			v++;
		}
		_putchar('\n');
		u++;
	}
}
