#include "main.h"
/**
*jack_bauer - prints mintues in a day
*
*Return : Always 0 (Success)
*/
void jack_bauer(void)
{
int x, y, b, d;
for (x = 48; x <= 50; x++)
{
for (y = 48; y <= 57; y++)
{
for (b = 48; b <= 53; b++)
{
for (d = 48; d <= 57; d++)
{
if (x >= 50 && y >= 52)
break;
_putchar(x);
_putchar(y);
_putchar(58);
_putchar(b);
_putchar(d);
_putchar('\n');
}
}
}
}
}
