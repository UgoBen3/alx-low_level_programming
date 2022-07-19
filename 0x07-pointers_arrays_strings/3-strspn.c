#include "main.h"
#include <string.h>
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string
 * @accept:string containing character
 * Return: length of occurance
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				break;
			}
		}
	}
	return (len2);
}
