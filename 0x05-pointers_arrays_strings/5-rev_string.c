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
  int start, end;
int c = 0;
 for (end = 0; s[end] != 0; end++)
{
for (start = 0; start < end/2; start++)
{
c = s[start];
s[start] = s[end - 1 - start];
s[end - 1 - start] = c;
}
}
for (start = 0; start < end; start++)
_putchar(s[start]);
}
