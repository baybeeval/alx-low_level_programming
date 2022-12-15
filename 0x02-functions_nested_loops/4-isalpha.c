#include "main.h"
/**
*_isalpha - checks the alphabet
*@c: It is an integer
*
*Return: Always 1 else return 0
*/
int _isalpha(int c)
{
if ((c < 9 && c <= 122) || (c < 65 && c <= 90))
{
return (1);
}
else 
{
return (0);
}
}
