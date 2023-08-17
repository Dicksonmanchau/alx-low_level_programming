#include <stdio.h>

int main(void)
{
	int age[] = {20, 25,34,17,16,51};
	int average;
	int total;

	total = age[0] + age[1] + age[2] + age[3] + age[4] + age[5];
	average = total / sizeof(age); 
	
	printf("The average of the age is %d\n",average);
	return (0);
}
