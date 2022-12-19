#include "main.h"
/**
*swap_int - swaps the values of two integers
*
*@a: is an integer
*@b: is an integer
*
*Return: void
*/
void swap_int(int *a, int *b)
{
int y = *a;
*a = *b;
*b = y;
}
