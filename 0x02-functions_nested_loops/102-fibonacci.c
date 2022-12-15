#include <stdio.h>
/**
*main - prints fibonacci numbers, start from 1 and 2
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
long int b1, b2, cd;
b1 = 1;
b2 = 2;
printf("%ld, %ld", b1, b2);
for (i = 0; i < 48; i++)
{
cd = b1 + b2;
printf(", %ld", cd);
b1 = b2;
b2 = cd;
}
printf("\n");
return (0);
}
