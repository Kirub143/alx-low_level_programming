#include "main.h"

/**
 * print_number - print an integer
 * @n: input integer
 * Return: no return
 */

void print_number(int n)
{
	unsigned int p, q, count;

	if (n < 0)
	{
		_putchar(45);
		p = n * -1;
	}
	else
	{
		p = n;
	}
	q = p;
	count = 1;

	while (q > 9)
	{
		q /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((p / count) % 10) + 48);
	}
}
