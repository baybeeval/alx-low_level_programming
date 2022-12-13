#include "main.h"
#include <stdio.h>
/**
*main - print lowercase alphabet
*
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
printf(alpha);
}
_putchar('\n');
return (0);
}
