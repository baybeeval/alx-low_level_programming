#include "main.h"
/**
*_strlen - checks the length of a string
*
*@s: is the length of the characters
*
*Return: length of the string
*/
int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
