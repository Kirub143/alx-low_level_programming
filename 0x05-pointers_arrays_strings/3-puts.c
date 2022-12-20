#include "main.h"

/**
 * _puts - prints a string.
 * @str: pointer to the string to pint
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
