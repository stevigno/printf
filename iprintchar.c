#include "main.h"
/**
 * iprintchar - prints a char
 * @arg: accept the the list of type va_list
 * Return: returns the len of char = 1
*/
int iprintchar(va_list arg)
{
char s_char;

s_char = va_arg(arg, int);
_putchar(s_char);
return (1);
}
