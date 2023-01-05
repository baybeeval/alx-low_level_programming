#include "main.h"
/**
*_puts_Recursion - prints a string followed by a new line
*
*@s: string
*
*Return: String
*/
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recusion(s + 1);
}
else
{
_putchar('\n');
}
} 
