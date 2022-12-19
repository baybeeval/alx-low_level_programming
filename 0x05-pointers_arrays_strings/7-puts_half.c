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
second = x;
y = second / 2;
while (y <= second)
{
-putchar(str[y]);
y++;
}
_putchar('\n');
}
