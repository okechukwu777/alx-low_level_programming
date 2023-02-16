#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that print the size of various type of computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a)stderr);
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b)stderr);
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c)stderr);
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d)stderr);
	printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f)stderr);
	return (0);
}
