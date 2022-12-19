#include "main.h"

/**
 * _atoi - convert string to an integer.
 * @s: string to convert
 * Return: int
 */

int _atoi(char *s)
{
	int a = 0;
	int n = 0;
	int signo = 1;

	while ((s[a] < '0' || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			signo *= -1;
		a++;
	}
	while ((s[a] >= '0' || s[a] <= '9') && s[a] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			n = n * 10 - (s[a] - '0');
			a++;
		}
	}
	signo *= -1;
	return (n * signo);
}
