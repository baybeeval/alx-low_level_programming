#include "holberton.h"
/**
*rot13 - encodes a string using rot13
*
*@s: is a string.
*
* Return:  pointer to destination
*/
char *rot13(char *s)
{
int count = 0;
while (s[count])
{
while ((s[count] >= 97 && s[count] <= 122) || (s[count] >= 65 && s[count] <= 90))
{
if ((s[count] >= 109 && s[count] <= 122) || (s[count] >= 77 && s[count] <= 90))
{
s[count] -= 13;
break;
}
s[count] += 13;
}
count++;
}
return (s);
}
