#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: the binary number as a string
 *
 * Return: unsigned int form of b, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != 1)
			return (0);
		num = num * 2 + (*b++ - '0');
	}
	return (num);
}
