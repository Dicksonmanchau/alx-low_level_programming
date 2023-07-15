#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates the use of the sizeof operator to determine
 * the size, in bytes, of different data types.
 * It declares variables of various
 * types: char, int, long int, long long int, and float.
 * It then uses the sizeof operator to retrieve the size of each variable
 * and prints the results.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(d));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}

