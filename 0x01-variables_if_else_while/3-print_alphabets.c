#include <stdio.h>
/**
 * main - Prints the alphabet in lower and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[26] = "abcdefghijklMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
