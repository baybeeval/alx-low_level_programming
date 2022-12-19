#include "main.h"
/**
*print_rev - prints a string in reverse followed by a new line
*
*@s: is the string
*
*Return: string
*/
void print_rev(char *s)
{
int c = 0;
while (c >= 0)
{
if (str[c] == '\0')
{
break;
c++;
}
c--;
for (c >= 0; c--)
{
_putchar(str[c]);
}
_putchar('\n');
}
