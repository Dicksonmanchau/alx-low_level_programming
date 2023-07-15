#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * This program demonstrates use of the sizeof operator to determine
 * the size, in bytes, of different data types.
 * It declares variables of various types:
 * char,int,long int,long long int,and float. 
 * It then uses the sizeof operator to retrieve the size of
 * each variable and prints the results.
 *
 * return 0 is equal  to success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	
	/**
	 * main - Entry point of the program
	 *
	 * return 0 is equal  to successful execution
	 */

	printf("size of a char %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("size of a int %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("size of a long %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("size of a long long %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("size of a float %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
