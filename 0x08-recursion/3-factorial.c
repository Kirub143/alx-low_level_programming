#include "main.h"

/**
 * factorial - return the factorial of 0 and 1 .
 * @n: the num to find factorial
 * Return: if n > 0 - the factorial of n.
 * if n < 0 - 1 to indicate an error.
 */

int factorial(int n)
{
	int result = n;

	if (n <  0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	result *= factorial(n - 1);

	return (result);
}
