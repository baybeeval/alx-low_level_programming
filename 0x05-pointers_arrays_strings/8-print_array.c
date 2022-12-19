#include "main.h"
#include <stdio.h>
/**
* print_array - prints an array of n numbers
*
*@a: The array of integers
*@n: The number of numbers to print
*
* Return: void
*/
void print_array(int *a, int n)
{
int x, count;
x = 0;
count = 1;
if (n < 0)
n = 0;
if (n > 0)
{
while (a[x] != '\0' && count < n)
{
printf("%d, ", a[x]);
x++;
count++;
}
printf("%d\n", a[x]);
}
}
