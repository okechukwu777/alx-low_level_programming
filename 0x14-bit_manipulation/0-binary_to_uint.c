#include "main.h"
#include <string.h>
/**
 * binary_to_uint - convert a binary to an unsigned
 * integer
 * @b: binary
 * Return: uint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int us;
	int length, base_2;

	if (b == 0)
		return(0);
	us = 0;
	for (length = 0; b[length] != '\0'; length++);
	for (length--,base_2 = 1; length >= 0; length--, base_2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			us += base_2;
		}
	}
	return (us);
}
