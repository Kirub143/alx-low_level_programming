#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
		{
			if (y > x)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');

				if (x * 100 + y != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
