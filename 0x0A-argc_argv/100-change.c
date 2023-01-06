#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for amount of money
 * @argc: length
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int po, total, ch, au;
	int coins[] = {25, 10, 5, 2, 1};

		po = total = ch = au = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]);

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[po] != '\0')
	{
		if (total >= coins[po])
		{
			au = (total / coins[po]);
			ch += au;
			total -= coins[po] * au;
		}
		po++;
	}
		printf("%d\n", ch);
		return (0);
}
