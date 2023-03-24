#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j <= 14; ++j)
		{
			i = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				i = j % 10;
			}
			_putchar('\n');
		}
	}
}
