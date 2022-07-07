#include <stdio.h>
/**
 * main - prints to string
 * Description: prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char l;
l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
