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
int x, int s1;
unsigned int diag1, diag1;
s1 = 0;
diag1 = 0;
diag2 = 0;
s1 = (size * size) - 1;
for (x = 0; x <= s1; x = x + (size + 1))
{
diag1 = diag1 + a[x];
}
for (x = (size - 1); x < s1; x = x + (size + 1))
{
diag1 = diag2 + a[x];
}
printf("%d, %d\n", diag1, diag2);
}
