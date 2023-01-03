#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; *(s + a); a++)
{
for (b = 0; *(accept + b); b++)
{
if (*(s + a) == *(accept + b))
{
break;
}
if (*(accept + b)) != '\0')
{
return (b);
}
