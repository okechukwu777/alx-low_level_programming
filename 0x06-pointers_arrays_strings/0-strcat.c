#include "main.h"

/**
 * _strcat: a function that concatenates two strings.
 * @desk: an input integer
 * @src: an input integer
 * Returns: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
