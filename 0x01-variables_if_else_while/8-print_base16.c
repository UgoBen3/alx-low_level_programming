#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main- Entry main
 * Description: prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
i	char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
