/**
 *main - prints to string
 *Description - prints alphabet in lowercase
 *Return: 0
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int i;
char l;
i = 48;
while  (i < 58)
{
putchar(i);
i++;
}
l = 'a';
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
