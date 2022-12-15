#include <stdio.h>
/**
* main - Prints Fizz Buzz test program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 5 == 0) && (i % 3 == 0))
{
printf("Fizz Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (x != 100)
{
printf(" ");
}
{
printf("\n");
}
return (0);
}
