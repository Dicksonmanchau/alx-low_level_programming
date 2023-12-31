#include "main.h"

/**
 * factorial(int n)- function that returns the factorial of a given number.
 * @n: the number whose factorial is printed
 * Return: -1 if number is negative
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
