#include "main.h"
/**
*cap_string - captializes all words of a string
*
*@s: string
*
*Return: uppercase string
*/
char *cap_string(char *s)
{
int x;
int count = 0;
int alpha[] = {32, 9, 10, 14, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
if (*(s + count) >= 97 && *(s + count) <= 122)
*(s + count) = *(s + count) - 32;
count++;
while (*(s + count) != '\0')
{
for (x = 0; x < 13; x++)
{
if (*(s + count) == alpha[x])
{
if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
*(s + (count + 1)) = *(s + (count + 1)) - 32;
break;
}
}
count++;
}
return (s);
}
