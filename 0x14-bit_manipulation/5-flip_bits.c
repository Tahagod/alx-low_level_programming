#include "main.h"

/**
 * flip_bits - counts the number of bits to change to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	unsigned long int xorval = n ^ m;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
