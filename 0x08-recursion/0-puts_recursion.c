#include "main.h"

/**
 * _puts_recursion - finctions that prints astring followed by a new line
 * @s: character to be printed
 * Return: returns void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

