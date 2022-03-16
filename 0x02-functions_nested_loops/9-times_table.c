#include "main.h"
/**
 * times_table - writes the 9 times table
 * @void: void
 * Return: void
 */
void times_table(void)
{
	int col, row, mul;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			mul = (col * row);
			if (row != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul < 10 && row !=0)
			{
				_putchar(' ');
				_putchar((mul % 10) + '0');
			}
			_putchar((mul % 10) + '0');
		}
		_putchar('\n');
	}
}
