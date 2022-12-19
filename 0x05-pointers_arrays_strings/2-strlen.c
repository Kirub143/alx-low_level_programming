#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string to check
 * Return: void
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	a++;

	return (a);
}
