/**
*_strcpy - print half of a string
*
*@dest: The destination
*@src: The source
*
*Return: copy of string
*/
char *_strcpy(char *dest, char *src)
{
int x;
for (x = 0; *(src + x) != '\0'; x++)
{
dest[x] = *(src + x);
}
dest[x] = '\0';
return (dest);
}
