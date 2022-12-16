#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	int cx;

	for (cx = 48; cx < 58; cx++)
	{
		if (cx != 50 && cx != 52)
			_putchar(cx);
	}
	_putchar('\n');
}
