#include "main.h"
/**
*print_chessboard - print out the chessboard
*
*@a: string
*
*Return: chessboard
*/
void print_chessboard(char (*a)[8])
{
unsigned int x, y;
for (x = 0; x <= 8; x++)
{
for (y = 0; y <= 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}

