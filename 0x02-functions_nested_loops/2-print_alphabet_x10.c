#include "main.h"

/**
 * print_alphabet_x10 - function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: void.
 */

void print_alphabet_x10(void)
{
	char z;
	int y;

	for (z = 0; z < 10; z++)
	{
		for (y = 'a'; y <= 'z'; y++)
			_putchar(y);
		_putchar('\n');
	}
}
