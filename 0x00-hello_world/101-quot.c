#include <unistd.h>

/**
 * main - Entry point of the program
 * 
 * Description:
 * This program prints the message "and that piece of art is useful"
 * followed by the author's name and date, to the standard error.
 * It does not use the printf or puts functions.
 *
 * Return: 1 (indicating an error condition)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

