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
char charType;
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longlongintType));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
return (0);
}
