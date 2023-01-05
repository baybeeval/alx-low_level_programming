#include "main.h"
/**
*
*_pow_recursion - returns value of x rasied to the power of y
*
*@x: number
*@y: power number raised
*
*Return : Value of x
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
