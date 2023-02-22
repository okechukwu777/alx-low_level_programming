#include "main.h"

/**
 * print_last_digit - Print the last digit
 * of a number
 * @n: input number as an integer
 *Description: a function that print last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{

	int r;

	if (n < 0)

		r = -1 * (n % 10);

	else
		r = n % 10;

	_putchar((r % 10) + '0');
	return (r % 10);
}
