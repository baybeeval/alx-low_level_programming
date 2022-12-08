#include <stdio.h>
#include <unistd.h>
/**
* main - print this quote
*
* Return: Always 1(Error)
*/
int main(void)
{
char str4[] = "and that piece of art is useful - Dora Korpar, 2015-10-19\n"
write(str4);
return (1);
}
