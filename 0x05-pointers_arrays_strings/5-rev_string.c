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
int start, end , c;
start = strlen(s);
{
for ( c = 0; c < start / 2; c++)
{
  end = s[c];
  s[c] = s[start - c - 1];
  s[start - c -1] = end
}
}
