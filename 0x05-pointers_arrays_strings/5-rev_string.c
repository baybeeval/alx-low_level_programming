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
int i, start, end;
char one, two;
i = 0;
while (s[i] != '\0')
{
i++;
}
start = i - 1;
end = start/ 2;
while (end >= 0)
{
one = s[start - end];
two = s[end];
s[end] = one;
s[start - end] = two;
end--;
}
}
