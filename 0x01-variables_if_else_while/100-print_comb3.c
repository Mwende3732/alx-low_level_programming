#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		if (i == '8' && j == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	j++;
}
j = '0';
i++;
}
return (0);
}
