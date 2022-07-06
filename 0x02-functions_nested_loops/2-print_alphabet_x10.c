#include "main.h"
/**
 * print_alphabet_x10()- prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alphabet, times;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		for (times = 0; times < 10; times++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
