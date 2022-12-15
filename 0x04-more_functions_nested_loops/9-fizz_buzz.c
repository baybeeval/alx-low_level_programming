#include "main.h"
#include <stdio.h>
/**
*main - prints Fizzbuzz, if multipes of 3 0r 5 or both
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++) 
{
if ((i % 3 == 0) && (i % 3 == 0)) 
{
printf("Fizz Buzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0) 
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
return 0;
}
