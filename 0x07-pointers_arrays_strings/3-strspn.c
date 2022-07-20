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
	unsigned int i, j, k;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = o;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
