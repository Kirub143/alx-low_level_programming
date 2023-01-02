#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes
 * @src: memory storage
 * @dest: memory to be coping on
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
