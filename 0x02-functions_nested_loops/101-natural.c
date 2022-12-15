#include <stdio.h>
/**
*main -Print natural number below 1024, multiples of 3 or of 5
*
*Return: Always 0 (Success)
*/
int main(void)
{
int p, t;
for (p = 1; p < 1024; p++)
{
if ((p % 3) == 0 || (p % 5) == 0)
t += p;
}
printf("%d\n", t);
return (0);
}
