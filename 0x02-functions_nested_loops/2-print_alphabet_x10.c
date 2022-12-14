#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet in lowercase
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i, b;
for (i = 0; i <= 9; i++)
{
for (b = 97; b <= 122; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
