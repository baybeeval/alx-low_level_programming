#include "main.h"
/**
*times_table - prints the times table
*@n: is an integer
*@x: is an integer
*@y: is an integer
*@t: is an integer
*Return: Always 0 (Success)
*/
void print_times_table(int n)
{
int x, y, t;
if (n >= 0 && n <= 15)
{
for (x = 0; x <= 100; x++)
{
_putchar(48);
for (y = 1; y <= 100; y++)
{
t = x * y;
_putchar(44);
_putchar(32);
if (t <= 9)
{
_putchar(32);
_putchar(32);
_putchar(t + 48);
}
else if (t <= 99)
{
_putchar((t / 10) + 48);
_putchar((t % 10) + 48);
}
else
{
_putchar((t / 100) + 48);
_putchar((t / 10) + 48);
_putchar((t % 10) + 48);
}
}
_putchar('\n');
}
}
}
