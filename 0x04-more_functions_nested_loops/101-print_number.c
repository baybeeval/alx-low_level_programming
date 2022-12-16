#include "main.h"
/**
* print_number - prints number an integer
*
* @n: is an integer
*
*Return: numbers
*/
void print_number(int n)
unsigned int x = n;
if (n < 48)
{
_putchar(45);
x = -x;
}
if ((x / 10) > 48)
{
print_number(x / 10);
_putchar((x % 10) + 48);
}
}
