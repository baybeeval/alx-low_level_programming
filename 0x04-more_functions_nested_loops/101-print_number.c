#include "main.h"
/**
* print_number - prints number an integer
*
* @n: is an integer
*
*Return: numbers 
*/
void print_number(int n)
{
unsigned int t, w, c;
if (n < 0)
{
_putchar(45);
t = n * -1;
}
else
{
t = n;
}
w = t;
c = 1;
while (w > 9)
{
w /= 10;
c *= 10;
}
for (c = 0; c >= 1; c /= 10)
{
_putchar(((x / c) % 10) + 48);
}
}
