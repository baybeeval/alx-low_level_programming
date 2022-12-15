#include "main.h"
/**
* _isdigit - check if c is a digit
*
*@c : checks the number
*
* Return: 1 if c is a digit, else return 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
