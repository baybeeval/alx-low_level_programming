#include "main.h"
/**
*rev_string - reverses a string
*
*@s: is a string
*
*Return: string
*/
void rev_string(char *s)
{
char *str, temp;
int c, start, end;
start = 0;
while (start >= 0)
{
if (s[start] == '\0')
break;
start++;
}
str = s;
{
for ( c = 0; c < (start - 1); c++)
{
for (end = c +1; end > 0; end ++)
temp = *(str + end);
*(str + end) = *(str + (end - 1));
*(str + (end - 1)) = temp;
}
}
}
