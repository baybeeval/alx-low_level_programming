/**
*reverse_array- reverses the contents of an array
*
*@a: array 
*
*Return: output reversed array
*/
void reverse_array(int *a, int n)
{
int x, y, cont;
for (x = 0; x < n-1; x++)
{
for (y = x + 1; y > 0; y--)
{
cont = *(a + y);
*(a + y) = *(a + (y - 1));
 *(a + (y - 1)) = cont;
}
}
}
