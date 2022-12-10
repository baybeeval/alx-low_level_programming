#include <stdio.h>
/**
* main - Prints the alphabet in lowercase reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[26] = "zyxwvutsrqopnmlkjhgfedcba";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
