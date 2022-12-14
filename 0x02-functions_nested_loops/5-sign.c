#include "main.h"
/**
*print_sign - show if number is greater than,equal to or less than zero
*
*@n: n is an integer
*
*Return: give 1 if greater, 0 if zero and -1 if less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
