#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
*main - generates passowrds
*
*Return : Always 0 (Success)
*/
int main()
{
int N ,i = 0;
int random_number = 0;
char numbers[] = "0123456789";
char letter[] = "abcdefghijklmnopqrstuvwxyz";
char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char symbol[] = "?!@$#^&*%£";
char password[N];
random_number = rand()%4;
srand((unsigned int)(time(NULL)));
for (i = 0; i < size; i++)
{
if(random_number == 0)
{
random_number = rand()%10;
password[i] = numbers[random_number];
}
else if (random_number == 1)
{
random_number = rand()%26;
password[i] = letter[random_number];
}
else if (random_number == 2)
{
random_number = rand()%26;
 password[i] = LETTER[random_number];
}
else
{
random_number = rand()%8;
password[i] = symbol[random_number];
printf("%c", password[i]);
}
return (0);
}
}
