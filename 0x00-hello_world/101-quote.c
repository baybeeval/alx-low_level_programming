#include <stdio.h>
#include <unistd.h>
/**
* main - print this quote
*
* Return: Always 1(Success)
*/
int main(void)
{
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2,str1,58);
return (1);
}
