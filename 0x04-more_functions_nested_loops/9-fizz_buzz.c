#include "main.h"
#include <stdio.h>
/**
* main - Prints the Fizz Buzz test program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("Fizz Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%u ", i);
}
}
return (0);
}
