#include "main.h"
int find_square(int n, int y);
int _sqrt_recursion(int n);

/**
 * find_square - find natural square root
 * @n: num to find square root of
 * @y: root to be tested
 * Return: if num has natural square root - square root
 * if num does not have natural square root - -1
 */

int find_square(int n, int y)
{
	if ((y * y) == n)
		return (y);

	if (y == n / 2)
		return (-1);
	return (find_square(n, y + 1));
}

/**
 * _sqrt_recursion - returns natural square root of a num
 * @n: num to be square
 * Return: if n have a natural square root - natural square root of n
 * if n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (find_square(n, y));
}
