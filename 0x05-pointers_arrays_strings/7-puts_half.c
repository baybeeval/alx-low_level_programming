#include "main.h"
/**
*puts_half - print half of a string
*
*@str: is the string
*
*Return: string
*/
void puts_half(char *str)
{
int x = 0, y, second;
while (str[x] != '\0')
{
x++;
}
if (x % 2 == 1)
{
y = (x-1) / 2;
y += 1;
}
else
{
y = x /2;
}
for (y ++; y < x; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
