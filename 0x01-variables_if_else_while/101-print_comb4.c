#include <stdio.h>
/**
 * main - Prints all possible combinations of three different digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num1, num2, nunt3;
for (num1 = 0; num1 < 8; num1++)
{
for (num2 = nu1 + 1; digit2 < 9; digit2++)
{
for (num3 = num2 + 1; num3 < 10; num3++)
{
putchar((num1 % 10) + '0');
putchar((num2 % 10) + '0');
putchar((num3 % 10) + '0');
if (num1 == 7 && num2 == 8 && num3 == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

