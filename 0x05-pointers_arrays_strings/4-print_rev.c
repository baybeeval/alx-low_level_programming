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
if (s[c] != '\0')
{
break;
c++;
}
c--;
while (c >= 0)
{
_putchar(s[c]);
c--;
}
_putchar('\n');
}
}
