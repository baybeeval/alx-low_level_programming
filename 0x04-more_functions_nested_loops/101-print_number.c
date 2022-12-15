#include "main.h"
/**
* print_number - prints number an integer
*
* @n: is an integer
*
*Return: nothing to return
*/
void print_number(int n)
{
unsigned int x = n;
if (n < 0)
{
_putchar(45);
x = -x;
}
if ((x / 10) > 0)
print_number(x / 10);
_putchar((x % 10) + 48);
}
