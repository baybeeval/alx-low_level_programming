#include <stdio.h>
/**
*print - prints fibonacci numbers, start from 1 and 2
*
*Return: Always 0 (Success)
*/
void printFibonacciNumbers(int n)
{
int b1 = 1, b2 = 2, i;

if (n < 1)
return;
printf("%d, ", b1);
for (i = 1; i < n; i++) {
printf("%d, ", b2);
int c = b1 + b2;
b1 = b2;
b2 = next;
}
}
int main()
{
printFibonacciNumbers(50);
return (0);
}
