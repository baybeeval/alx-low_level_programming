#include "main.h"
/**
*rot13 -  rot13 encoding
*
*@s: is a string.
*
*Return: pointer to destination
*/
char *rot13(char *s)
{
int count = 0, x;
char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
while (*(s + count) != '\0')
{
for (x = 0; x < 52; x++)
{
if (*(s + count) == alphabet[x])
{
*(s + count) = rot13[x];
break;
}
}
count++;
}
return (s);
}
