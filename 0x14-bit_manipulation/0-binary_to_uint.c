#include "main.h"

/**
 * _atoi - converts chars to integer
 *
 * @c: char to convert
 *
 * Return: converted integer
*/
unsigned int _atoi(char c)
{
	return ((unsigned int) c - '0');
}

/**
 * _strlen - gets the length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int _strlen(const char *str)
{
	unsigned int ind = 0;

	while (str[ind] != '\0')
		ind++;
	return (ind);
}

/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0
 *         if @b contains a character
 *         that is not 0 or 1 or when
 *         @b is null
*/
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int result = 0, base2 = 1,  number = 0;

	/*if b is NULL return 0*/
	if (b == NULL)
		return (0);

	#ifdef DEBUG /*print debug statement*/
	printf("String is %s, and length is %u.\n", b, _strlen(b));
	#endif

	/*iterate through string*/
	for (ind = _strlen(b) - 1; ind >= 0; ind--)
	{
		number = _atoi(b[ind]); /*convert char to number*/

		#ifdef DEBUG /*print debug statements*/
		printf("number is %u, ind is %i and base is %u.\n\n", number, ind, base2);
		#endif

		/*if number is not 0 or 1 return 0*/
		if (number != 0 && number != 1)
			return (0);

		result += number * base2; /*enable debug to see it in action*/
		base2 *= 2;

		#ifdef DEBUG /*print debug statements*/
		printf("Result is %u.\n", result);
		#endif
	}

	return (result);

}
