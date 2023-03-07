#include "main.h"

/**
 * _memset - a function that fills memory with constant bytes
 * @s: memory area
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
