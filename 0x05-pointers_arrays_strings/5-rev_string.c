#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int r = 0, i = 0;
	char tmp;

	while (s[r] != '\0')
		r++;

	while (i < r--)
	{
		tmp = s[i];
		s[i++] = s[r];
		s[r] = tmp;
	}
}
