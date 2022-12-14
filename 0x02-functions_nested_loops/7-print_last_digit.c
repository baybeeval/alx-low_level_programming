#include "main.h"
/**
*print_last_digit - Establish the last digit
*
*Return: Always n (Success)
*/
int print_last_digit(int n)
{
int last = n % 10;
if (n < 0)
last = last * -1;
_putchar(last + '0');
return (last);
}
