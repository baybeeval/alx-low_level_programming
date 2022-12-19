#include "main.h"
/**
*_puts - prints a string to stdout
*
*Returns: string
*/
void _puts(char *str)
{
int c = 0;
while (c >=0)
{
if (str[c] =='\0')
{
_putchar('\n');
}
_putchar(str[c]);
c++;
}
}
