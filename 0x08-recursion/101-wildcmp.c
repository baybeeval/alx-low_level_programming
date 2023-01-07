#include "main.h"
/**
* wildcmp - compares two strings to return 1 if identical
* @s1: string 1.
* @s2: string containg the asterics special character
*Return: 1 else return 0
*/
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
return (0);
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
return (0);
}
