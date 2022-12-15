#include <stdio.h>
/**
*main - prints Fizzbuzz, if multipes of 3 0r 5 or both
*
*Return: number
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++) 
{
if ((i % 3 == 0) && (i % 3 == 0)) 
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
}
else
{
printf("%d", i);
}
if (i != 100)
{
print("");
}
printf("\n");
return 0;
}
