#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int intType;
long int longintType;
long long int longlongintType;
float floatType;
double doubleTyple;
char charType;
printf("Size of a char: %d bytes\n", sizeof(charType));
printf("Size of an int: %d bytes\n", sizeof(intType));
printf("Size of a long int: %d bytes\n", sizeof(longintType));
printf("Size of a long long int: %d bytes\n", sizeof(longlongintType));
printf("Size of a float: %d bytes\n", sizeof(floatType));
return (0);
}
