#include "main.h"
/**
*print_number - prints an integer
*
*@n: is an integer
*
*Return: Integer
*/
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
_putchar(45);
x *= -1;
}
x = n;
if (x / 10)
print_number(x / 10);
_putchar(x % 10 + '0');
}
