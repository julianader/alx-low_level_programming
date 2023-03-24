#include "main.h"

/**
 * print_numbers - print 0 - 9
 *             only using _putchar twice
 *
 * Return: Always 0 (Success)
*/

int print_numbers(void)
{
	int i;

	for (i = 0; i<10; ++i)
	{
		printf("%d", i);
	}
	printf("\n");

	return (0);
}
