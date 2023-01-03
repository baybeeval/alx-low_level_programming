#include "main.h"
/**
*_strpbrk - searches a string for any set of bytes
*
*@s: source
*@accept: string of bytes
*
*Return: string
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
if (*(s + a) == *(accept + b))
{
break;
}
if (*(accept + b)) != '\0')
{
return (s + a);
}
return (0);
}
