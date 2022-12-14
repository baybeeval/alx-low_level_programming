#include "main.h"
/**
*_islower - print character that is lowercase
*
*@c: The character in ASCII code
*
*Return: Always 0 if lowercase, else return 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
