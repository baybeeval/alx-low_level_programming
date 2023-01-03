#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*
*@s:source
*@accept: string
*
* Return: length of string
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b, a;
for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
if (*(s + a) == *(accept + b))
break;
}
 if (*(accept + b) == '\0')
break;
}
return (b);
}
