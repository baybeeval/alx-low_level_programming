#include "main.h"
/**
*_puts - prints a string to stdout
*
*@str: is the string
*
*Returns: string
*/
void _puts(char *str)
{
int c = 0;
while (c >= 0)
{
if (str[c] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[c]);
c++;
}
}
