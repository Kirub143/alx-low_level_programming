#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int x, kz;

	x = 612852475143;
	for (kz = 2; kz <= x; kz++)
	{
		if (x % kz == 0)
		{
			x /= kz;
			kz--;
		}
	}
	printf("%ld\x", kz);
	return (0);
}
