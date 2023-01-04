#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power y
 * @x: num to be raised
 * @y: power
 * Return: the value ofx raised to the power y
 */

int _pow_recursion(int x, int y)
{
	int might = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	might *= _pow_recursion(x, y - 1);

	return (might);
}
