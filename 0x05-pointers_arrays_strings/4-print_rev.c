#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
	r++;
	}
	for (r -= 1; r >= 0; r--)
	{
	_putchar(s[r]);
	}
	_putchar('\n');
}
