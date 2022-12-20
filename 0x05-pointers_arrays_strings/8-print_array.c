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
int x;
for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x == n - 1)
continue;
printf(", ");
}
printf("\n");
}
