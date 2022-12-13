#include <main.h>
/**
*main - Prints putchar
*
*Return: Always 0 (Success)
*/
int main(void)
{
char text[9] = "_putchar";
int x = 0;
for(x = 0; x < 8; x++)
{
_putchar(text[x]);
}
_putchar('\n');
return (0);
}
