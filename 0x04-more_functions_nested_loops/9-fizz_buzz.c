#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;

	for (; i < 100; i++)
	{
		if (i % 3 < 1 && i % 5 < 1)
			printf("Fizz Buzz ");
		else if (i % 3 < 1)
			printf("Fizz ");
		else if (i % 5 < 1)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
