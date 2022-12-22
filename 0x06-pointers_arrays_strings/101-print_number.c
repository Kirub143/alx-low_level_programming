#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int nx;

	nx  = n;
	if (n < 0)
	{
		_putchar('-');
		nx = -n;
	}
	if ((nx / 10 != 0))
	{
		print_number(nx / 10);
	}
	_putchar((nx % 10) + '0');
}
