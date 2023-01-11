#include "main.h"
#include <stdlib.h>
/**
*free_grid - function that frees a 2 dimensional grid
*
*@grid: pointer to a grid
*@height: no of rows in grid
*
*Return: void
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
