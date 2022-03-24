#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: the destination value
 * @src: source value
 * @n: the limit of the concatenation 
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count++;
	}
	return (dest);
}
