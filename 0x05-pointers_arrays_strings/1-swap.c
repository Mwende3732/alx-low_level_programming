#include "main.h"

/**
 * swap_int - swaps value of 2 int
 * @a: pointerto one of the integers to be swaped
 * @b: pointer to one of the integersto be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
