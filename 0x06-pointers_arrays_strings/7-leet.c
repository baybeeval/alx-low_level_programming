#include "main.h"
/**
*leet - encodes string to 1337
*
*@s: string
*
*Return: encoded string
*/
char *leet(char *s)
{
int count = 0;
int x;
int lower[] = {97, 101, 111, 116, 108};
int upper[] = {65, 69, 79, 84, 76};
int num[] = {52, 51, 48, 55, 49};
while (*(s + count) != '\0')
{
for (x = 0; x < 5; x++)
{
if (*(s + count) == lower[x] || *(s + count) == upper[x])
{
*(s + count) = num[x];
}
count++;
}
}
return (s);
}
