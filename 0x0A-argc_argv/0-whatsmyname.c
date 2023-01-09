#include "main.h"
#include <stdio.h>
/**
*main - prints program name followed by new line
*@argc: number of command line arguments
*@argv: array which are arguments.
*Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
