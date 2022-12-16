#include "main.h"
/**
* print_number - prints number an integer
*
* @n: is an integer
*
*Return: numbers 
*/
void print_number(int n)
unsigned int num = n;
if (n < 48)
{
_putchar(45);
num = -num;
}
if ((num / 10) > 48)
{
print_number(num / 10);
_putchar((num % 10) + 48);
}
}
