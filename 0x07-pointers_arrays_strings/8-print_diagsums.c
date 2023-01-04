#include "main.h"
#include <stdio.h>
/**
*print_diagsums - prints sums of 2 diagonals of a square matrix of integers
*
*@a:array
*@size: size
*
*Return: void
*/
void print_diagsums(int *a, int size)
{
int x, diag1, diag2;
diag1 = 0;
diag2 = 0;
for (x = 0; x < size; x++)
{
diag1 += a[(x *size) + x];
diag 2 += a[(size - 1) + ((size - 1) *x)];
}
printf("%d, %d\n", diag1, diag2);
}
