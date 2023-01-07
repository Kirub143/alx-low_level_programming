#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: container
 * @needle: string to be searched
 *
 * Return: Always 0  (success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l =  haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
