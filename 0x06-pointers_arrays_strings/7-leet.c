#include "main.h"
/**
*leet - encodes string from characters to numbers
*
*@s: string
*
*Return: encoded string
*/
char *leet(char *s)
{
int x;
if (s[x] == 'a' || s[x] == 'A')
{
s[x] = '4';
}
else if (s[x] == 'e' || s[x] == 'E')
{
s[x] = '3';
}
else if (s[x] == 'o' || s[x] == 'O')
{
s[x] = '0';
}
else if (s[x] == 't' || s[x] == 'T')
{
s[x] = '7';
}
else if (s[x] == 'l' || s[x] == 'L')
{
s[x] = '1';
}
return (s);
}

