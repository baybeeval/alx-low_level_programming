#include "main.h"
/**
*_strcat - concatenates two strings
*
*@dest: destination
*@src: source
*
*Return: Always 0
*/
char *_strcat(char *dest, char *src)
{
int x;
int y = 0;
while (dest[y] != '\0')
{
y++;
}
for (x = 0 ; x < y && src[x] != '\0' ; x++)
dest[y + x] = src[x];
dest[y + x] = '\0';
return (dest);
}
