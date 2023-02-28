#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; src[r] != '\0'; r++)
	{
	dest[r] = src[r];
	}
	dest[r++] = '\0';
	return (dest);
}
