#include "main.h"
/**
*_atoi - converts a string into an integer
*
*@s: is a sting
*
*Return: integer
*/
int _atoi(char *s)
{
unsigned int count = 0, size = 0, x = 0, bd= 1, y = 1, i;
while (*(s + count) != '\0')
{
if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
break;
if (*(s + count) == '-')
bd *= -1;
if ((*(s + count) >= '0') && (*(s + count) <= '9'))
{
if (size > 0)
y *= 10;
size++;
}
count++;
}
for (i = count - size; i < count; i++)
{
x = x + ((*(s + i) - 48) * y);
y /= 10;
}
return (x * bd);
}
