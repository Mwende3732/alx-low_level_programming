#include <stdio.h>
#include "main.h"

/**
 *
 * -memcpy - fills the first n bytes of the memory area.
 *  @dest: string that need to be filled by source.
 *  @src: bytes form source will be pasted to dest.
 *  @n: n of bytes to be filled.
 *
 *  Return: pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
