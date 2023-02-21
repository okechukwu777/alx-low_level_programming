#include "main.h"

/**
* main - function that prints the alphabet, in lowercase.
*
* Return: Nothing
*/

void print_alphabet(void)
{
	char z;

	for (z = 'a'; z <= 'z'; z++)
		_putchar(z);
	_putchar('\n');
}
