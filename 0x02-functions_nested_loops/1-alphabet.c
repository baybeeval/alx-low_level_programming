#include "main.h"
/**
*main - print lowercase alphabet
*
*Return: Always 0 (Success)
*/
void pritn_alphabet(void)
{
char alpha;
for(alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
return (0);
}
