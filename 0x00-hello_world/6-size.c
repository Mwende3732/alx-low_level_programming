/** this is a short description for a program to print plain text and file size */
#include <stdio.h>
/**
 * main: Prints out the sizes of the various data types on the computer
 * this program is compiled on.
 * Return: 0 if success
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf(" byte(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(i));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(l));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(ll));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf(" byte(s)\n");
    return (0);
}

