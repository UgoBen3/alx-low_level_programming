#include "main.h"
/**
 * print _sign- entry point
 * @c : prints the sign of a number.
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	int num;

	if (c > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (c == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}

