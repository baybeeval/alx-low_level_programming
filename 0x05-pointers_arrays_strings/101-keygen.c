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
int i;
int random_number = rand()%4;
char numbers[] = "0123456789";
char letter[] = "abcdefghijklmnopqrstuvwxyz";
char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char symbol[] = "?!@$#^&*%£";
int size;
scanf("%d", &size);
char password[20];
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
password[i] = symbols[random_number];
}
}
for(i = 0; i < size; i++)
{
printf("%c", password[i]);
}
return (0);
}
