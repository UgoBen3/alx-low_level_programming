#include "main.h"
/**
 * string_toupper- function that changes all lowercase letters of
 * a string to uppercase.
 * @s: input string
 * Return: Always 0
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
	}
	return (0);
}
