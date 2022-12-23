#include "main.h"
#include <stdio.h>
/**
*rot13 - encodes a string using rot13
*
*@s: is a string.
*
*Return: pointer to destination
*/
char *rot13(char *s)
{
int c = 0;
while (s[c])
{
while ((s[c] >= 97 && s[c] <= 122) || (s[c] >= 65 && s[c] <= 90))
{
if ((s[c] >= 109 && s[c] <= 122) || (s[c] >= 77 && s[c] <= 90))
{
s[c] -= 13;
break;
}
s[c] += 13;
break;
}
c++;
}
return (s);
}
