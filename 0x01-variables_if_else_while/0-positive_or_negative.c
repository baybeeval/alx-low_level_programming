#include <stdlib.h>
#include <time.h>
/**
*main: print value as prositver or zero or negative
*
/*Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0){
printf("%d is postivitve \n");
}
else if(n == 0){
printf("%d is Zero \n");
}
else{
printf("%d is negtative \n");
}
return (0);
}
