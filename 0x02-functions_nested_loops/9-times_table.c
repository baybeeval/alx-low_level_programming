#include "main.h"
/**
*times_table - prints the times table of 9
*
*Return: Always 0 (Success)
*/
void times_table(void)
int x, y, t;
{
for (x = 0; x <= 9; x++)
{
_putchar(48);
for (y = 1; y <= 9; y++)
{
t = x * y;
_putchar(44);
_putchar(32);
if (t <= 9)
{
_putchar(32);
_putchar(t + 48);
}
else
{
_putchar((t / 10) + 48);
_putchar((t % 10) + 48);
}
}
_putchar('\n');
}
}
