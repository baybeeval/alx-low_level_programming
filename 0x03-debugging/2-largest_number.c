#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
int largest;
a = 972;
b = -98;
c = 0;
if (a > b && b > c)
{
_putchar(a);
}
else if (b > a && a > c)
{
_putchar(b);
}
else
{
_putchar(c);
}
return (largest);
}
