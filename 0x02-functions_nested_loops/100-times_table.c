#include "main.h"
/**
*print_times_table - prints the times table of 100
*
*@n: Is an integer
*
*Return: None
*/
void print_times_table(int n)
{
{
int a, b, cd;
if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
_putchar(48);
for (b = 1; b <= n; b++)
{
cd = a * b;
_putchar(44);
_putchar(32);
if (cd <= 9)
{
_putchar(32);
_putchar(32);
_putchar(cd + 48);
}
else if (cd <= 99)
{
_putchar(32);
_putchar((cd / 10) + 48);
_putchar((cd % 10) + 48);
}
else
{
_putchar(((cd / 100) % 10) + 48);
_putchar(((cd / 10) % 10) + 48);
_putchar((cd % 10) + 48);
}
}
_putchar('\n');
}
}
}
