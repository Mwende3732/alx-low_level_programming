#include "main.h"
/**
 * _islower - tests whethera character is a lowercase letter from alphabet.
 * @c: character to test.
 * Return: 1 when true, 0 if it is not lowercase letter.
 */
int _islower(int c)
{
	
	if (c > 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
