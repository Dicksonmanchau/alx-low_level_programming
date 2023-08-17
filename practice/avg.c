/* C program to demonstrate
 * average of array elements
 */
#include <stdio.h>
 
/* Function that return average
 * of given array.
 */

double average(int marks[], int n)
{
    // Find the sum of array element
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
	    sum += marks[i];
    }
 
    return (double) sum / n;
}
 
/* main - entry and end of our program
 * return - always 0 when successful
 */

int main(void)
{
    // Input array
    int marks[] = {81,92,73,64,95};
 
    // Size of array
    int n = sizeof(marks) / sizeof(marks[0]);
 
    // average(marks, n) function is return the
    // average of the array.
    int avg = average(marks, n);
 
    // Display average of given array
    printf("Average = %d ", avg);
    return 0;
}
