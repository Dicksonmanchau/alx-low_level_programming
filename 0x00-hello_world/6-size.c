#include<stdio.h>

/*
 * main - a program that prints a line with puts function
 * return 0 is equal  to success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	prinntf("size of a char %lu byte(s)\n", (unsigned long) sizeof(a));
	prinntf("size of a int %lu byte(s)\n", (unsigned long) sizeof(b));
	prinntf("size of a long %lu byte(s)\n", (unsigned long) sizeof(c));
	prinntf("size of a long long %lu byte(s)\n", (unsigned long) sizeof(d));
	prinntf("size of a float %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
