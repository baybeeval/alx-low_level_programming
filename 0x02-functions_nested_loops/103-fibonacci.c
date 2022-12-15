#include <stdio.h>
/**
* main - Establishes sum of the -value
*
*
* Return: Always 0 (Success)
*/
int main(void)
{
long int n1, n2, cn, bcn;
n1 = 1;
n2 = 2;
cn = bcn = 0;
while (cn <= 4000000)
{
cn = n1 + n2;
n1 = n2;
n2 = cn;
if ((n1 % 2) == 0)
{
bcn += n1;
}
}
printf("%ld\n", bcn);
return (0);
}
