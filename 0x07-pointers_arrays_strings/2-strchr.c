#include "main.h"
/**
*_strchr - function that locates a character in a string
*@s: string
*@c: character
*
*Return: pointer to first charater
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if  (*s == c)
{
return (s);
}
s++;
}
if  (*s == c)
{
return (s);
}
return ('\0')
}
