#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entery point
 *
 * Description: false or true validation
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("int is zero\n, n");
	else
		printf("int is negative\n, n");
	return (0);
}
