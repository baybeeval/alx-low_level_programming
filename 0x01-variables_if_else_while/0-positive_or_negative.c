#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Establish if number is postitve or negative
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0){
  printf("%d is postivitve \n", n);
}
else if(n == 0){
  printf("%d is Zero \n", n);
}
else{
  printf("%d is negtative \n", n);
}
return (0);
}
