#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int r = 0, i, n;

	while (str[r] != '\0')
		r++;

	if (r % 2 == 0)
		n = r / 2;

	else
		n = (r + 1) / 2;

	for (i = n; i < r; i++)
		_putchar(str[i]);

	_putchar('\n');
}
