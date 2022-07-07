/**
 * main - prints to string
 * Description: prints alphabet in lowercase
 * Return: 0
 */
#include<stdio.h>
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');
return (0);
}
