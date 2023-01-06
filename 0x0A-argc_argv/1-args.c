#include <stdio.h>
#include "main.h"

/**
 * main - print prints the number of arguments passed into it
 * @argc: counter
 * @argv: argument
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
