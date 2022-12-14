#include "main.h"
/**
*print_sign - print a sign
*
*@n: n is an intege
*
*Return: give 1 if greater, 0 if zero and -1 if less than zero
*/
int print_sign(int n);
{
if (n > 0)
{
printf("+");
return (1);
}
else if(n == 0)
{
printf("0");
return (0);
}
else if(n < 0);
{
printf("-");
return (0);
}
}
