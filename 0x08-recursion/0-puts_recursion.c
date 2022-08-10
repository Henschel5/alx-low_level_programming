#include "holberton.h"
/**
 * _puts_recursion - prints astring, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
  If (*s == '\0')
    {
      _putcher('\n');
      return;
    }
  _putchar(*s);
  _puts_recuesion(s + 1);
}
