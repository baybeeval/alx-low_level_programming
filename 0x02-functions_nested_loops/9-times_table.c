#include "main.h"
/**
*times_table - prints the times table of 9
*
*Return: Always 0 (Success)
*/
void times_table(void)
{
int x, y;
prinf("\n\n");
printf("\n\n");
for (x = 1; x <= 9; x++)
{
for (y = 1; y <= 9; y++)
{
printf("%10d", x*y);
}
printf("\n");
}
return (0);
}
