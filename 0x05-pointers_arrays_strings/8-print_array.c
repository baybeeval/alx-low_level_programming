#include "main.h"
/**
* puts_half - Prints half of a string
* @str: The string to print
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
i++;
count++;
}
printf("%d\n", a[x]);
}
}
